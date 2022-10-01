// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSFORMJOBRESPONSE_H
#define QTAWS_CREATETRANSFORMJOBRESPONSE_H

#include "sagemakerresponse.h"
#include "createtransformjobrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateTransformJobResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateTransformJobResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateTransformJobResponse(const CreateTransformJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTransformJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTransformJobResponse)
    Q_DISABLE_COPY(CreateTransformJobResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
