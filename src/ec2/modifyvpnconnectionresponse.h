// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPNCONNECTIONRESPONSE_H
#define QTAWS_MODIFYVPNCONNECTIONRESPONSE_H

#include "ec2response.h"
#include "modifyvpnconnectionrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpnConnectionResponsePrivate;

class QTAWSEC2_EXPORT ModifyVpnConnectionResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyVpnConnectionResponse(const ModifyVpnConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyVpnConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyVpnConnectionResponse)
    Q_DISABLE_COPY(ModifyVpnConnectionResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
