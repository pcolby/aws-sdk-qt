// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPNCONNECTIONOPTIONSRESPONSE_H
#define QTAWS_MODIFYVPNCONNECTIONOPTIONSRESPONSE_H

#include "ec2response.h"
#include "modifyvpnconnectionoptionsrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpnConnectionOptionsResponsePrivate;

class QTAWSEC2_EXPORT ModifyVpnConnectionOptionsResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyVpnConnectionOptionsResponse(const ModifyVpnConnectionOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyVpnConnectionOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyVpnConnectionOptionsResponse)
    Q_DISABLE_COPY(ModifyVpnConnectionOptionsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
