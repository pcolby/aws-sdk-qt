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

#ifndef QTAWS_SETV2LOGGINGLEVELRESPONSE_H
#define QTAWS_SETV2LOGGINGLEVELRESPONSE_H

#include "iotresponse.h"
#include "setv2logginglevelrequest.h"

namespace AWS {

namespace iot {

class SetV2LoggingLevelResponsePrivate;

class QTAWS_EXPORT SetV2LoggingLevelResponse : public SetV2LoggingLevelResponse {
    Q_OBJECT

public:
    SetV2LoggingLevelResponse(const SetV2LoggingLevelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetV2LoggingLevelRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SetV2LoggingLevelResponse)
    Q_DISABLE_COPY(SetV2LoggingLevelResponse)

};

} // namespace iot
} // namespace AWS

#endif
