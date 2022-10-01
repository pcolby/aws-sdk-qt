// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKECLIENTVPNINGRESSRESPONSE_H
#define QTAWS_REVOKECLIENTVPNINGRESSRESPONSE_H

#include "ec2response.h"
#include "revokeclientvpningressrequest.h"

namespace QtAws {
namespace Ec2 {

class RevokeClientVpnIngressResponsePrivate;

class QTAWSEC2_EXPORT RevokeClientVpnIngressResponse : public Ec2Response {
    Q_OBJECT

public:
    RevokeClientVpnIngressResponse(const RevokeClientVpnIngressRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RevokeClientVpnIngressRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeClientVpnIngressResponse)
    Q_DISABLE_COPY(RevokeClientVpnIngressResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
