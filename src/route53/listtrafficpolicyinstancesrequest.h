// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRAFFICPOLICYINSTANCESREQUEST_H
#define QTAWS_LISTTRAFFICPOLICYINSTANCESREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class ListTrafficPolicyInstancesRequestPrivate;

class QTAWSROUTE53_EXPORT ListTrafficPolicyInstancesRequest : public Route53Request {

public:
    ListTrafficPolicyInstancesRequest(const ListTrafficPolicyInstancesRequest &other);
    ListTrafficPolicyInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTrafficPolicyInstancesRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
