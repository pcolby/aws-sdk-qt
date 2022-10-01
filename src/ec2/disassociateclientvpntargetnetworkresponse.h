// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECLIENTVPNTARGETNETWORKRESPONSE_H
#define QTAWS_DISASSOCIATECLIENTVPNTARGETNETWORKRESPONSE_H

#include "ec2response.h"
#include "disassociateclientvpntargetnetworkrequest.h"

namespace QtAws {
namespace Ec2 {

class DisassociateClientVpnTargetNetworkResponsePrivate;

class QTAWSEC2_EXPORT DisassociateClientVpnTargetNetworkResponse : public Ec2Response {
    Q_OBJECT

public:
    DisassociateClientVpnTargetNetworkResponse(const DisassociateClientVpnTargetNetworkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateClientVpnTargetNetworkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateClientVpnTargetNetworkResponse)
    Q_DISABLE_COPY(DisassociateClientVpnTargetNetworkResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
