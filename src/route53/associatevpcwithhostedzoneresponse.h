// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEVPCWITHHOSTEDZONERESPONSE_H
#define QTAWS_ASSOCIATEVPCWITHHOSTEDZONERESPONSE_H

#include "route53response.h"
#include "associatevpcwithhostedzonerequest.h"

namespace QtAws {
namespace Route53 {

class AssociateVPCWithHostedZoneResponsePrivate;

class QTAWSROUTE53_EXPORT AssociateVPCWithHostedZoneResponse : public Route53Response {
    Q_OBJECT

public:
    AssociateVPCWithHostedZoneResponse(const AssociateVPCWithHostedZoneRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateVPCWithHostedZoneRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateVPCWithHostedZoneResponse)
    Q_DISABLE_COPY(AssociateVPCWithHostedZoneResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
