// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMVOCABULARYMETADATAREQUEST_P_H
#define QTAWS_DESCRIBECUSTOMVOCABULARYMETADATAREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "describecustomvocabularymetadatarequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeCustomVocabularyMetadataRequest;

class DescribeCustomVocabularyMetadataRequestPrivate : public LexModelsV2RequestPrivate {

public:
    DescribeCustomVocabularyMetadataRequestPrivate(const LexModelsV2Request::Action action,
                                   DescribeCustomVocabularyMetadataRequest * const q);
    DescribeCustomVocabularyMetadataRequestPrivate(const DescribeCustomVocabularyMetadataRequestPrivate &other,
                                   DescribeCustomVocabularyMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCustomVocabularyMetadataRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
