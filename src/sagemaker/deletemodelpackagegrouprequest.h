// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMODELPACKAGEGROUPREQUEST_H
#define QTAWS_DELETEMODELPACKAGEGROUPREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteModelPackageGroupRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DeleteModelPackageGroupRequest : public SageMakerRequest {

public:
    DeleteModelPackageGroupRequest(const DeleteModelPackageGroupRequest &other);
    DeleteModelPackageGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteModelPackageGroupRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
