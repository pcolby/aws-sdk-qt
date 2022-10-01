// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPGAMESESSIONPLACEMENTRESPONSE_H
#define QTAWS_STOPGAMESESSIONPLACEMENTRESPONSE_H

#include "gameliftresponse.h"
#include "stopgamesessionplacementrequest.h"

namespace QtAws {
namespace GameLift {

class StopGameSessionPlacementResponsePrivate;

class QTAWSGAMELIFT_EXPORT StopGameSessionPlacementResponse : public GameLiftResponse {
    Q_OBJECT

public:
    StopGameSessionPlacementResponse(const StopGameSessionPlacementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopGameSessionPlacementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopGameSessionPlacementResponse)
    Q_DISABLE_COPY(StopGameSessionPlacementResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
