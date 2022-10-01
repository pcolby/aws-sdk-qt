// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIPADDRESSTYPEREQUEST_H
#define QTAWS_SETIPADDRESSTYPEREQUEST_H

#include "elasticloadbalancingv2request.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class SetIpAddressTypeRequestPrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT SetIpAddressTypeRequest : public ElasticLoadBalancingv2Request {

public:
    SetIpAddressTypeRequest(const SetIpAddressTypeRequest &other);
    SetIpAddressTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetIpAddressTypeRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
