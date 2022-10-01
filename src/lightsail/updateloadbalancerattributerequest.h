// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOADBALANCERATTRIBUTEREQUEST_H
#define QTAWS_UPDATELOADBALANCERATTRIBUTEREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class UpdateLoadBalancerAttributeRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT UpdateLoadBalancerAttributeRequest : public LightsailRequest {

public:
    UpdateLoadBalancerAttributeRequest(const UpdateLoadBalancerAttributeRequest &other);
    UpdateLoadBalancerAttributeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLoadBalancerAttributeRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
