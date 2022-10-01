// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMODELPACKAGEGROUPRESPONSE_H
#define QTAWS_CREATEMODELPACKAGEGROUPRESPONSE_H

#include "sagemakerresponse.h"
#include "createmodelpackagegrouprequest.h"

namespace QtAws {
namespace SageMaker {

class CreateModelPackageGroupResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateModelPackageGroupResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateModelPackageGroupResponse(const CreateModelPackageGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateModelPackageGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateModelPackageGroupResponse)
    Q_DISABLE_COPY(CreateModelPackageGroupResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
