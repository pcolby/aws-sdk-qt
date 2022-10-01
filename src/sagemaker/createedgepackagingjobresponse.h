// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEDGEPACKAGINGJOBRESPONSE_H
#define QTAWS_CREATEEDGEPACKAGINGJOBRESPONSE_H

#include "sagemakerresponse.h"
#include "createedgepackagingjobrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateEdgePackagingJobResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateEdgePackagingJobResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateEdgePackagingJobResponse(const CreateEdgePackagingJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateEdgePackagingJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEdgePackagingJobResponse)
    Q_DISABLE_COPY(CreateEdgePackagingJobResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
