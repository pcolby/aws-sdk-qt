// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELISTENERREQUEST_H
#define QTAWS_CREATELISTENERREQUEST_H

#include "elasticloadbalancingv2request.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class CreateListenerRequestPrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT CreateListenerRequest : public ElasticLoadBalancingv2Request {

public:
    CreateListenerRequest(const CreateListenerRequest &other);
    CreateListenerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateListenerRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
