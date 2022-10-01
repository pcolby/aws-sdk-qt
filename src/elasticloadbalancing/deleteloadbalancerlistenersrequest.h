// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOADBALANCERLISTENERSREQUEST_H
#define QTAWS_DELETELOADBALANCERLISTENERSREQUEST_H

#include "elasticloadbalancingrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DeleteLoadBalancerListenersRequestPrivate;

class QTAWSELASTICLOADBALANCING_EXPORT DeleteLoadBalancerListenersRequest : public ElasticLoadBalancingRequest {

public:
    DeleteLoadBalancerListenersRequest(const DeleteLoadBalancerListenersRequest &other);
    DeleteLoadBalancerListenersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLoadBalancerListenersRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
