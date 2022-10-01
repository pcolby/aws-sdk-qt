// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEVPCFROMHOSTEDZONERESPONSE_H
#define QTAWS_DISASSOCIATEVPCFROMHOSTEDZONERESPONSE_H

#include "route53response.h"
#include "disassociatevpcfromhostedzonerequest.h"

namespace QtAws {
namespace Route53 {

class DisassociateVPCFromHostedZoneResponsePrivate;

class QTAWSROUTE53_EXPORT DisassociateVPCFromHostedZoneResponse : public Route53Response {
    Q_OBJECT

public:
    DisassociateVPCFromHostedZoneResponse(const DisassociateVPCFromHostedZoneRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateVPCFromHostedZoneRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateVPCFromHostedZoneResponse)
    Q_DISABLE_COPY(DisassociateVPCFromHostedZoneResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
