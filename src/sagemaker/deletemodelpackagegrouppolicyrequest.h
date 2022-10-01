// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMODELPACKAGEGROUPPOLICYREQUEST_H
#define QTAWS_DELETEMODELPACKAGEGROUPPOLICYREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteModelPackageGroupPolicyRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DeleteModelPackageGroupPolicyRequest : public SageMakerRequest {

public:
    DeleteModelPackageGroupPolicyRequest(const DeleteModelPackageGroupPolicyRequest &other);
    DeleteModelPackageGroupPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteModelPackageGroupPolicyRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
