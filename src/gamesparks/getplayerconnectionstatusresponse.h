// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPLAYERCONNECTIONSTATUSRESPONSE_H
#define QTAWS_GETPLAYERCONNECTIONSTATUSRESPONSE_H

#include "gamesparksresponse.h"
#include "getplayerconnectionstatusrequest.h"

namespace QtAws {
namespace GameSparks {

class GetPlayerConnectionStatusResponsePrivate;

class QTAWSGAMESPARKS_EXPORT GetPlayerConnectionStatusResponse : public GameSparksResponse {
    Q_OBJECT

public:
    GetPlayerConnectionStatusResponse(const GetPlayerConnectionStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPlayerConnectionStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPlayerConnectionStatusResponse)
    Q_DISABLE_COPY(GetPlayerConnectionStatusResponse)

};

} // namespace GameSparks
} // namespace QtAws

#endif
