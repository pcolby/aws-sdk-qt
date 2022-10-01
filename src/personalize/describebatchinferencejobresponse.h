// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBATCHINFERENCEJOBRESPONSE_H
#define QTAWS_DESCRIBEBATCHINFERENCEJOBRESPONSE_H

#include "personalizeresponse.h"
#include "describebatchinferencejobrequest.h"

namespace QtAws {
namespace Personalize {

class DescribeBatchInferenceJobResponsePrivate;

class QTAWSPERSONALIZE_EXPORT DescribeBatchInferenceJobResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    DescribeBatchInferenceJobResponse(const DescribeBatchInferenceJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeBatchInferenceJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBatchInferenceJobResponse)
    Q_DISABLE_COPY(DescribeBatchInferenceJobResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
