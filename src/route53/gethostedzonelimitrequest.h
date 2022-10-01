// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHOSTEDZONELIMITREQUEST_H
#define QTAWS_GETHOSTEDZONELIMITREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class GetHostedZoneLimitRequestPrivate;

class QTAWSROUTE53_EXPORT GetHostedZoneLimitRequest : public Route53Request {

public:
    GetHostedZoneLimitRequest(const GetHostedZoneLimitRequest &other);
    GetHostedZoneLimitRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetHostedZoneLimitRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
