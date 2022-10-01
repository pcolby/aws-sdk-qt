// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOADBALANCERSREQUEST_H
#define QTAWS_GETLOADBALANCERSREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetLoadBalancersRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetLoadBalancersRequest : public LightsailRequest {

public:
    GetLoadBalancersRequest(const GetLoadBalancersRequest &other);
    GetLoadBalancersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLoadBalancersRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
