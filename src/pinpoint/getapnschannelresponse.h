/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETAPNSCHANNELRESPONSE_H
#define QTAWS_GETAPNSCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "getapnschannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetApnsChannelResponsePrivate;

class QTAWS_EXPORT GetApnsChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetApnsChannelResponse(const GetApnsChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetApnsChannelRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(GetApnsChannelResponse)
    Q_DISABLE_COPY(GetApnsChannelResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
