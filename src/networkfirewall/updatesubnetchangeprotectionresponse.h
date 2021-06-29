/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_UPDATESUBNETCHANGEPROTECTIONRESPONSE_H
#define QTAWS_UPDATESUBNETCHANGEPROTECTIONRESPONSE_H

#include "networkfirewallresponse.h"
#include "updatesubnetchangeprotectionrequest.h"

namespace QtAws {
namespace NetworkFirewall {

class UpdateSubnetChangeProtectionResponsePrivate;

class QTAWSNETWORKFIREWALL_EXPORT UpdateSubnetChangeProtectionResponse : public NetworkFirewallResponse {
    Q_OBJECT

public:
    UpdateSubnetChangeProtectionResponse(const UpdateSubnetChangeProtectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSubnetChangeProtectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSubnetChangeProtectionResponse)
    Q_DISABLE_COPY(UpdateSubnetChangeProtectionResponse)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif
