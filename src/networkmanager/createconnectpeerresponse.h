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

#ifndef QTAWS_CREATECONNECTPEERRESPONSE_H
#define QTAWS_CREATECONNECTPEERRESPONSE_H

#include "networkmanagerresponse.h"
#include "createconnectpeerrequest.h"

namespace QtAws {
namespace NetworkManager {

class CreateConnectPeerResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT CreateConnectPeerResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    CreateConnectPeerResponse(const CreateConnectPeerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateConnectPeerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConnectPeerResponse)
    Q_DISABLE_COPY(CreateConnectPeerResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
