// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROCESSINGJOBRESPONSE_H
#define QTAWS_CREATEPROCESSINGJOBRESPONSE_H

#include "sagemakerresponse.h"
#include "createprocessingjobrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateProcessingJobResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateProcessingJobResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateProcessingJobResponse(const CreateProcessingJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateProcessingJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProcessingJobResponse)
    Q_DISABLE_COPY(CreateProcessingJobResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
