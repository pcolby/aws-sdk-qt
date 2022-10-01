// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECLIENTVPNTARGETNETWORKRESPONSE_H
#define QTAWS_ASSOCIATECLIENTVPNTARGETNETWORKRESPONSE_H

#include "ec2response.h"
#include "associateclientvpntargetnetworkrequest.h"

namespace QtAws {
namespace Ec2 {

class AssociateClientVpnTargetNetworkResponsePrivate;

class QTAWSEC2_EXPORT AssociateClientVpnTargetNetworkResponse : public Ec2Response {
    Q_OBJECT

public:
    AssociateClientVpnTargetNetworkResponse(const AssociateClientVpnTargetNetworkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateClientVpnTargetNetworkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateClientVpnTargetNetworkResponse)
    Q_DISABLE_COPY(AssociateClientVpnTargetNetworkResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
