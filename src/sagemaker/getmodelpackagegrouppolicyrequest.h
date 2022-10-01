// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMODELPACKAGEGROUPPOLICYREQUEST_H
#define QTAWS_GETMODELPACKAGEGROUPPOLICYREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class GetModelPackageGroupPolicyRequestPrivate;

class QTAWSSAGEMAKER_EXPORT GetModelPackageGroupPolicyRequest : public SageMakerRequest {

public:
    GetModelPackageGroupPolicyRequest(const GetModelPackageGroupPolicyRequest &other);
    GetModelPackageGroupPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetModelPackageGroupPolicyRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
