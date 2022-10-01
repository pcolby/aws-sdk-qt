// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMVOCABULARYMETADATAREQUEST_H
#define QTAWS_DESCRIBECUSTOMVOCABULARYMETADATAREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeCustomVocabularyMetadataRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT DescribeCustomVocabularyMetadataRequest : public LexModelsV2Request {

public:
    DescribeCustomVocabularyMetadataRequest(const DescribeCustomVocabularyMetadataRequest &other);
    DescribeCustomVocabularyMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCustomVocabularyMetadataRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
