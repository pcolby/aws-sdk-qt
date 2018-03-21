/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_FLUSHSTAGECACHERESPONSE_H
#define QTAWS_FLUSHSTAGECACHERESPONSE_H

#include "apigatewayresponse.h"
#include "flushstagecacherequest.h"

namespace AWS {

namespace APIGateway {

class FlushStageCacheResponsePrivate;

class QTAWS_EXPORT FlushStageCacheResponse : public APIGatewayResponse {
    Q_OBJECT

public:
    FlushStageCacheResponse(const FlushStageCacheRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const FlushStageCacheRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(FlushStageCacheResponse)
    Q_DISABLE_COPY(FlushStageCacheResponse)

};

} // namespace APIGateway
} // namespace AWS

#endif
