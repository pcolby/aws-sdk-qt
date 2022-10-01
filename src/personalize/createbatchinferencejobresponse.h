// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBATCHINFERENCEJOBRESPONSE_H
#define QTAWS_CREATEBATCHINFERENCEJOBRESPONSE_H

#include "personalizeresponse.h"
#include "createbatchinferencejobrequest.h"

namespace QtAws {
namespace Personalize {

class CreateBatchInferenceJobResponsePrivate;

class QTAWSPERSONALIZE_EXPORT CreateBatchInferenceJobResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    CreateBatchInferenceJobResponse(const CreateBatchInferenceJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBatchInferenceJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBatchInferenceJobResponse)
    Q_DISABLE_COPY(CreateBatchInferenceJobResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
