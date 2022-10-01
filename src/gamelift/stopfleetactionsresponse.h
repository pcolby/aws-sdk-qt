// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPFLEETACTIONSRESPONSE_H
#define QTAWS_STOPFLEETACTIONSRESPONSE_H

#include "gameliftresponse.h"
#include "stopfleetactionsrequest.h"

namespace QtAws {
namespace GameLift {

class StopFleetActionsResponsePrivate;

class QTAWSGAMELIFT_EXPORT StopFleetActionsResponse : public GameLiftResponse {
    Q_OBJECT

public:
    StopFleetActionsResponse(const StopFleetActionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopFleetActionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopFleetActionsResponse)
    Q_DISABLE_COPY(StopFleetActionsResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
