// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHINSTANCESFROMLOADBALANCERREQUEST_H
#define QTAWS_DETACHINSTANCESFROMLOADBALANCERREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class DetachInstancesFromLoadBalancerRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT DetachInstancesFromLoadBalancerRequest : public LightsailRequest {

public:
    DetachInstancesFromLoadBalancerRequest(const DetachInstancesFromLoadBalancerRequest &other);
    DetachInstancesFromLoadBalancerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachInstancesFromLoadBalancerRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
