// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGAMERESPONSE_H
#define QTAWS_UPDATEGAMERESPONSE_H

#include "gamesparksresponse.h"
#include "updategamerequest.h"

namespace QtAws {
namespace GameSparks {

class UpdateGameResponsePrivate;

class QTAWSGAMESPARKS_EXPORT UpdateGameResponse : public GameSparksResponse {
    Q_OBJECT

public:
    UpdateGameResponse(const UpdateGameRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateGameRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGameResponse)
    Q_DISABLE_COPY(UpdateGameResponse)

};

} // namespace GameSparks
} // namespace QtAws

#endif
