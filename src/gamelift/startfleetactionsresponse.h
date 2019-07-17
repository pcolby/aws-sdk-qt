/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_STARTFLEETACTIONSRESPONSE_H
#define QTAWS_STARTFLEETACTIONSRESPONSE_H

#include "gameliftresponse.h"
#include "startfleetactionsrequest.h"

namespace QtAws {
namespace GameLift {

class StartFleetActionsResponsePrivate;

class QTAWS_EXPORT StartFleetActionsResponse : public GameLiftResponse {
    Q_OBJECT

public:
    StartFleetActionsResponse(const StartFleetActionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartFleetActionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartFleetActionsResponse)
    Q_DISABLE_COPY(StartFleetActionsResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
