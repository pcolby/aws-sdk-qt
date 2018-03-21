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

#ifndef QTAWS_SETLOGGINGOPTIONSRESPONSE_H
#define QTAWS_SETLOGGINGOPTIONSRESPONSE_H

#include "iotresponse.h"
#include "setloggingoptionsrequest.h"

namespace AWS {

namespace IoT {

class SetLoggingOptionsResponsePrivate;

class QTAWS_EXPORT SetLoggingOptionsResponse : public SetLoggingOptionsResponse {
    Q_OBJECT

public:
    SetLoggingOptionsResponse(const SetLoggingOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetLoggingOptionsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SetLoggingOptionsResponse)
    Q_DISABLE_COPY(SetLoggingOptionsResponse)

};

} // namespace IoT
} // namespace AWS

#endif
