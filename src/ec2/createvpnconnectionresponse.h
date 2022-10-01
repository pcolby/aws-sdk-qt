// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPNCONNECTIONRESPONSE_H
#define QTAWS_CREATEVPNCONNECTIONRESPONSE_H

#include "ec2response.h"
#include "createvpnconnectionrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateVpnConnectionResponsePrivate;

class QTAWSEC2_EXPORT CreateVpnConnectionResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateVpnConnectionResponse(const CreateVpnConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVpnConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVpnConnectionResponse)
    Q_DISABLE_COPY(CreateVpnConnectionResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
