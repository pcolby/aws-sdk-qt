// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETSUBNETSREQUEST_H
#define QTAWS_SETSUBNETSREQUEST_H

#include "elasticloadbalancingv2request.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class SetSubnetsRequestPrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT SetSubnetsRequest : public ElasticLoadBalancingv2Request {

public:
    SetSubnetsRequest(const SetSubnetsRequest &other);
    SetSubnetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetSubnetsRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
