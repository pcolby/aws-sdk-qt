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

#ifndef QTAWS_STOPACTIVITYSTREAMRESPONSE_H
#define QTAWS_STOPACTIVITYSTREAMRESPONSE_H

#include "rdsresponse.h"
#include "stopactivitystreamrequest.h"

namespace QtAws {
namespace RDS {

class StopActivityStreamResponsePrivate;

class QTAWS_EXPORT StopActivityStreamResponse : public RdsResponse {
    Q_OBJECT

public:
    StopActivityStreamResponse(const StopActivityStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopActivityStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopActivityStreamResponse)
    Q_DISABLE_COPY(StopActivityStreamResponse)

};

} // namespace RDS
} // namespace QtAws

#endif
