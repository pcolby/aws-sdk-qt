// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREUSABLEDELEGATIONSETLIMITREQUEST_H
#define QTAWS_GETREUSABLEDELEGATIONSETLIMITREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class GetReusableDelegationSetLimitRequestPrivate;

class QTAWSROUTE53_EXPORT GetReusableDelegationSetLimitRequest : public Route53Request {

public:
    GetReusableDelegationSetLimitRequest(const GetReusableDelegationSetLimitRequest &other);
    GetReusableDelegationSetLimitRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReusableDelegationSetLimitRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
