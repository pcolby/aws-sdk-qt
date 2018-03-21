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

#ifndef QTAWS_GETBAIDUCHANNELRESPONSE_H
#define QTAWS_GETBAIDUCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "getbaiduchannelrequest.h"

namespace AWS {

namespace Pinpoint {

class GetBaiduChannelResponsePrivate;

class QTAWS_EXPORT GetBaiduChannelResponse : public GetBaiduChannelResponse {
    Q_OBJECT

public:
    GetBaiduChannelResponse(const GetBaiduChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBaiduChannelRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(GetBaiduChannelResponse)
    Q_DISABLE_COPY(GetBaiduChannelResponse)

};

} // namespace Pinpoint
} // namespace AWS

#endif
