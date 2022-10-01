// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVELISTENERCERTIFICATESRESPONSE_H
#define QTAWS_REMOVELISTENERCERTIFICATESRESPONSE_H

#include "elasticloadbalancingv2response.h"
#include "removelistenercertificatesrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class RemoveListenerCertificatesResponsePrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT RemoveListenerCertificatesResponse : public ElasticLoadBalancingv2Response {
    Q_OBJECT

public:
    RemoveListenerCertificatesResponse(const RemoveListenerCertificatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveListenerCertificatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveListenerCertificatesResponse)
    Q_DISABLE_COPY(RemoveListenerCertificatesResponse)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
