// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYLISTENERREQUEST_H
#define QTAWS_MODIFYLISTENERREQUEST_H

#include "elasticloadbalancingv2request.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class ModifyListenerRequestPrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT ModifyListenerRequest : public ElasticLoadBalancingv2Request {

public:
    ModifyListenerRequest(const ModifyListenerRequest &other);
    ModifyListenerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyListenerRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
