// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMODELPACKAGEGROUPPOLICYREQUEST_H
#define QTAWS_PUTMODELPACKAGEGROUPPOLICYREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class PutModelPackageGroupPolicyRequestPrivate;

class QTAWSSAGEMAKER_EXPORT PutModelPackageGroupPolicyRequest : public SageMakerRequest {

public:
    PutModelPackageGroupPolicyRequest(const PutModelPackageGroupPolicyRequest &other);
    PutModelPackageGroupPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutModelPackageGroupPolicyRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
