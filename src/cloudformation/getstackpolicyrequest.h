// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTACKPOLICYREQUEST_H
#define QTAWS_GETSTACKPOLICYREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class GetStackPolicyRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT GetStackPolicyRequest : public CloudFormationRequest {

public:
    GetStackPolicyRequest(const GetStackPolicyRequest &other);
    GetStackPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStackPolicyRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
