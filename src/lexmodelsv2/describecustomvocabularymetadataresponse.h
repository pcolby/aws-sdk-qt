// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMVOCABULARYMETADATARESPONSE_H
#define QTAWS_DESCRIBECUSTOMVOCABULARYMETADATARESPONSE_H

#include "lexmodelsv2response.h"
#include "describecustomvocabularymetadatarequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeCustomVocabularyMetadataResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT DescribeCustomVocabularyMetadataResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    DescribeCustomVocabularyMetadataResponse(const DescribeCustomVocabularyMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCustomVocabularyMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCustomVocabularyMetadataResponse)
    Q_DISABLE_COPY(DescribeCustomVocabularyMetadataResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
