// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCONNECTPLAYERRESPONSE_H
#define QTAWS_DISCONNECTPLAYERRESPONSE_H

#include "gamesparksresponse.h"
#include "disconnectplayerrequest.h"

namespace QtAws {
namespace GameSparks {

class DisconnectPlayerResponsePrivate;

class QTAWSGAMESPARKS_EXPORT DisconnectPlayerResponse : public GameSparksResponse {
    Q_OBJECT

public:
    DisconnectPlayerResponse(const DisconnectPlayerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisconnectPlayerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisconnectPlayerResponse)
    Q_DISABLE_COPY(DisconnectPlayerResponse)

};

} // namespace GameSparks
} // namespace QtAws

#endif
