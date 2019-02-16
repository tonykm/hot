#ifndef __HOT__COMMONS__EXTENDED_MULT_MASK_PARTIAL_KEY_MAPPING_INTERFACE___
#define __HOT__COMMONS__EXTENDED_MULT_MASK_PARTIAL_KEY_MAPPING_INTERFACE___

#include <immintrin.h>

#include <array>
#include <utility>
#include <type_traits>

#include "hot/commons/MultiMaskPartialKeyMappingInterface.hpp"

namespace hot { namespace commons {

    // forward declaration
    class SingleMaskPartialKeyMapping;

    template<unsigned int numberExtractionMasks> class MultiMaskPartialKeyMapping;

    template<unsigned int numberExtractionMasks> class ExtendedMultiMaskPartialKeyMapping;

/**
 * A partial key mapping which uses an array of byte offstes and a correspond array of byte masks which is able to extract partial keys consisting of those bits, which are stored in the underlying byte masks
 *
 * @tparam numberExtractionMasks the number of the underlying 64 bit masks. 1 implies 8 different mask bytes, 2 implies 16 different mask bytes and 3 implies 32 different mask bytes.
 */
template<unsigned int numberExtractionMasks> class ExtendedMultiMaskPartialKeyMapping : public MultiMaskPartialKeyMapping {
	friend class ExtendedMultiMaskPartialKeyMapping<1u>;
	friend class ExtendedMultiMaskPartialKeyMapping<2u>;
	friend class ExtendedMultiMaskPartialKeyMapping<4u>;

private:

    ExtractionDataArray mExtractionExtendedPositions;
};

} }

#endif