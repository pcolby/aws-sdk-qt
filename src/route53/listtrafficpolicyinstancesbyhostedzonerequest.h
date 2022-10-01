// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRAFFICPOLICYINSTANCESBYHOSTEDZONEREQUEST_H
#define QTAWS_LISTTRAFFICPOLICYINSTANCESBYHOSTEDZONEREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class ListTrafficPolicyInstancesByHostedZoneRequestPrivate;

class QTAWSROUTE53_EXPORT ListTrafficPolicyInstancesByHostedZoneRequest : public Route53Request {

public:
    ListTrafficPolicyInstancesByHostedZoneRequest(const ListTrafficPolicyInstancesByHostedZoneRequest &other);
    ListTrafficPolicyInstancesByHostedZoneRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTrafficPolicyInstancesByHostedZoneRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
