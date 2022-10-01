// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
