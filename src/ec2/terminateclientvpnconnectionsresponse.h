// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATECLIENTVPNCONNECTIONSRESPONSE_H
#define QTAWS_TERMINATECLIENTVPNCONNECTIONSRESPONSE_H

#include "ec2response.h"
#include "terminateclientvpnconnectionsrequest.h"

namespace QtAws {
namespace Ec2 {

class TerminateClientVpnConnectionsResponsePrivate;

class QTAWSEC2_EXPORT TerminateClientVpnConnectionsResponse : public Ec2Response {
    Q_OBJECT

public:
    TerminateClientVpnConnectionsResponse(const TerminateClientVpnConnectionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TerminateClientVpnConnectionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TerminateClientVpnConnectionsResponse)
    Q_DISABLE_COPY(TerminateClientVpnConnectionsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
