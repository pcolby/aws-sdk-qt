// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDLISTENERCERTIFICATESRESPONSE_H
#define QTAWS_ADDLISTENERCERTIFICATESRESPONSE_H

#include "elasticloadbalancingv2response.h"
#include "addlistenercertificatesrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class AddListenerCertificatesResponsePrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT AddListenerCertificatesResponse : public ElasticLoadBalancingv2Response {
    Q_OBJECT

public:
    AddListenerCertificatesResponse(const AddListenerCertificatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddListenerCertificatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddListenerCertificatesResponse)
    Q_DISABLE_COPY(AddListenerCertificatesResponse)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
