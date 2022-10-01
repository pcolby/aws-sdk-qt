// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGAMERESPONSE_H
#define QTAWS_GETGAMERESPONSE_H

#include "gamesparksresponse.h"
#include "getgamerequest.h"

namespace QtAws {
namespace GameSparks {

class GetGameResponsePrivate;

class QTAWSGAMESPARKS_EXPORT GetGameResponse : public GameSparksResponse {
    Q_OBJECT

public:
    GetGameResponse(const GetGameRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetGameRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGameResponse)
    Q_DISABLE_COPY(GetGameResponse)

};

} // namespace GameSparks
} // namespace QtAws

#endif
