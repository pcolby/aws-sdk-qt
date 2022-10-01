// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMODELPACKAGERESPONSE_H
#define QTAWS_CREATEMODELPACKAGERESPONSE_H

#include "sagemakerresponse.h"
#include "createmodelpackagerequest.h"

namespace QtAws {
namespace SageMaker {

class CreateModelPackageResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateModelPackageResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateModelPackageResponse(const CreateModelPackageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateModelPackageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateModelPackageResponse)
    Q_DISABLE_COPY(CreateModelPackageResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
