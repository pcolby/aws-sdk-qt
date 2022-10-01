// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAFFICPOLICYVERSIONREQUEST_H
#define QTAWS_CREATETRAFFICPOLICYVERSIONREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class CreateTrafficPolicyVersionRequestPrivate;

class QTAWSROUTE53_EXPORT CreateTrafficPolicyVersionRequest : public Route53Request {

public:
    CreateTrafficPolicyVersionRequest(const CreateTrafficPolicyVersionRequest &other);
    CreateTrafficPolicyVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTrafficPolicyVersionRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
