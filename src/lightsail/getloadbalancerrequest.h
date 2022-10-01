// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOADBALANCERREQUEST_H
#define QTAWS_GETLOADBALANCERREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetLoadBalancerRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetLoadBalancerRequest : public LightsailRequest {

public:
    GetLoadBalancerRequest(const GetLoadBalancerRequest &other);
    GetLoadBalancerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLoadBalancerRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
