// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLINEAGEGROUPPOLICYREQUEST_H
#define QTAWS_GETLINEAGEGROUPPOLICYREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class GetLineageGroupPolicyRequestPrivate;

class QTAWSSAGEMAKER_EXPORT GetLineageGroupPolicyRequest : public SageMakerRequest {

public:
    GetLineageGroupPolicyRequest(const GetLineageGroupPolicyRequest &other);
    GetLineageGroupPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLineageGroupPolicyRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
