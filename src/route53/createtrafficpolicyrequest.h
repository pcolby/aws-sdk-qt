// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAFFICPOLICYREQUEST_H
#define QTAWS_CREATETRAFFICPOLICYREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class CreateTrafficPolicyRequestPrivate;

class QTAWSROUTE53_EXPORT CreateTrafficPolicyRequest : public Route53Request {

public:
    CreateTrafficPolicyRequest(const CreateTrafficPolicyRequest &other);
    CreateTrafficPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTrafficPolicyRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
