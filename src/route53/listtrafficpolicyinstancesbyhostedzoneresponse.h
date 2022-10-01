// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRAFFICPOLICYINSTANCESBYHOSTEDZONERESPONSE_H
#define QTAWS_LISTTRAFFICPOLICYINSTANCESBYHOSTEDZONERESPONSE_H

#include "route53response.h"
#include "listtrafficpolicyinstancesbyhostedzonerequest.h"

namespace QtAws {
namespace Route53 {

class ListTrafficPolicyInstancesByHostedZoneResponsePrivate;

class QTAWSROUTE53_EXPORT ListTrafficPolicyInstancesByHostedZoneResponse : public Route53Response {
    Q_OBJECT

public:
    ListTrafficPolicyInstancesByHostedZoneResponse(const ListTrafficPolicyInstancesByHostedZoneRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTrafficPolicyInstancesByHostedZoneRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTrafficPolicyInstancesByHostedZoneResponse)
    Q_DISABLE_COPY(ListTrafficPolicyInstancesByHostedZoneResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
