// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGAMESESSIONLOGURLRESPONSE_H
#define QTAWS_GETGAMESESSIONLOGURLRESPONSE_H

#include "gameliftresponse.h"
#include "getgamesessionlogurlrequest.h"

namespace QtAws {
namespace GameLift {

class GetGameSessionLogUrlResponsePrivate;

class QTAWSGAMELIFT_EXPORT GetGameSessionLogUrlResponse : public GameLiftResponse {
    Q_OBJECT

public:
    GetGameSessionLogUrlResponse(const GetGameSessionLogUrlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetGameSessionLogUrlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGameSessionLogUrlResponse)
    Q_DISABLE_COPY(GetGameSessionLogUrlResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
