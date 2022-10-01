// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOADBALANCERREQUEST_H
#define QTAWS_DELETELOADBALANCERREQUEST_H

#include "elasticloadbalancingrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DeleteLoadBalancerRequestPrivate;

class QTAWSELASTICLOADBALANCING_EXPORT DeleteLoadBalancerRequest : public ElasticLoadBalancingRequest {

public:
    DeleteLoadBalancerRequest(const DeleteLoadBalancerRequest &other);
    DeleteLoadBalancerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLoadBalancerRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
