// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGAMERESPONSE_H
#define QTAWS_CREATEGAMERESPONSE_H

#include "gamesparksresponse.h"
#include "creategamerequest.h"

namespace QtAws {
namespace GameSparks {

class CreateGameResponsePrivate;

class QTAWSGAMESPARKS_EXPORT CreateGameResponse : public GameSparksResponse {
    Q_OBJECT

public:
    CreateGameResponse(const CreateGameRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateGameRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGameResponse)
    Q_DISABLE_COPY(CreateGameResponse)

};

} // namespace GameSparks
} // namespace QtAws

#endif
