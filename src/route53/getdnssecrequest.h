// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDNSSECREQUEST_H
#define QTAWS_GETDNSSECREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class GetDNSSECRequestPrivate;

class QTAWSROUTE53_EXPORT GetDNSSECRequest : public Route53Request {

public:
    GetDNSSECRequest(const GetDNSSECRequest &other);
    GetDNSSECRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDNSSECRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
