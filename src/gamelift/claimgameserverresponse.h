// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLAIMGAMESERVERRESPONSE_H
#define QTAWS_CLAIMGAMESERVERRESPONSE_H

#include "gameliftresponse.h"
#include "claimgameserverrequest.h"

namespace QtAws {
namespace GameLift {

class ClaimGameServerResponsePrivate;

class QTAWSGAMELIFT_EXPORT ClaimGameServerResponse : public GameLiftResponse {
    Q_OBJECT

public:
    ClaimGameServerResponse(const ClaimGameServerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ClaimGameServerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ClaimGameServerResponse)
    Q_DISABLE_COPY(ClaimGameServerResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
