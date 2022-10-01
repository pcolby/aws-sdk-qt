// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHELASTICLOADBALANCERREQUEST_H
#define QTAWS_DETACHELASTICLOADBALANCERREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class DetachElasticLoadBalancerRequestPrivate;

class QTAWSOPSWORKS_EXPORT DetachElasticLoadBalancerRequest : public OpsWorksRequest {

public:
    DetachElasticLoadBalancerRequest(const DetachElasticLoadBalancerRequest &other);
    DetachElasticLoadBalancerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachElasticLoadBalancerRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
