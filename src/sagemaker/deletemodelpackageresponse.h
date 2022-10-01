// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMODELPACKAGERESPONSE_H
#define QTAWS_DELETEMODELPACKAGERESPONSE_H

#include "sagemakerresponse.h"
#include "deletemodelpackagerequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteModelPackageResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteModelPackageResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteModelPackageResponse(const DeleteModelPackageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteModelPackageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteModelPackageResponse)
    Q_DISABLE_COPY(DeleteModelPackageResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
