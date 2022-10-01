// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDLISTENERCERTIFICATESREQUEST_H
#define QTAWS_ADDLISTENERCERTIFICATESREQUEST_H

#include "elasticloadbalancingv2request.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class AddListenerCertificatesRequestPrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT AddListenerCertificatesRequest : public ElasticLoadBalancingv2Request {

public:
    AddListenerCertificatesRequest(const AddListenerCertificatesRequest &other);
    AddListenerCertificatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddListenerCertificatesRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
