// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHELASTICLOADBALANCERREQUEST_H
#define QTAWS_ATTACHELASTICLOADBALANCERREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class AttachElasticLoadBalancerRequestPrivate;

class QTAWSOPSWORKS_EXPORT AttachElasticLoadBalancerRequest : public OpsWorksRequest {

public:
    AttachElasticLoadBalancerRequest(const AttachElasticLoadBalancerRequest &other);
    AttachElasticLoadBalancerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachElasticLoadBalancerRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
