// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMODELPACKAGERESPONSE_H
#define QTAWS_UPDATEMODELPACKAGERESPONSE_H

#include "sagemakerresponse.h"
#include "updatemodelpackagerequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateModelPackageResponsePrivate;

class QTAWSSAGEMAKER_EXPORT UpdateModelPackageResponse : public SageMakerResponse {
    Q_OBJECT

public:
    UpdateModelPackageResponse(const UpdateModelPackageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateModelPackageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateModelPackageResponse)
    Q_DISABLE_COPY(UpdateModelPackageResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
