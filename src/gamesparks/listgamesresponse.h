// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGAMESRESPONSE_H
#define QTAWS_LISTGAMESRESPONSE_H

#include "gamesparksresponse.h"
#include "listgamesrequest.h"

namespace QtAws {
namespace GameSparks {

class ListGamesResponsePrivate;

class QTAWSGAMESPARKS_EXPORT ListGamesResponse : public GameSparksResponse {
    Q_OBJECT

public:
    ListGamesResponse(const ListGamesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGamesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGamesResponse)
    Q_DISABLE_COPY(ListGamesResponse)

};

} // namespace GameSparks
} // namespace QtAws

#endif
