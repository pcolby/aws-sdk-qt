// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVELISTENERCERTIFICATESREQUEST_H
#define QTAWS_REMOVELISTENERCERTIFICATESREQUEST_H

#include "elasticloadbalancingv2request.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class RemoveListenerCertificatesRequestPrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT RemoveListenerCertificatesRequest : public ElasticLoadBalancingv2Request {

public:
    RemoveListenerCertificatesRequest(const RemoveListenerCertificatesRequest &other);
    RemoveListenerCertificatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveListenerCertificatesRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
