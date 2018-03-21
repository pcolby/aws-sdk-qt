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

#ifndef QTAWS_UPDATESMSCHANNELRESPONSE_H
#define QTAWS_UPDATESMSCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "updatesmschannelrequest.h"

namespace AWS {

namespace Pinpoint {

class UpdateSmsChannelResponsePrivate;

class QTAWS_EXPORT UpdateSmsChannelResponse : public UpdateSmsChannelResponse {
    Q_OBJECT

public:
    UpdateSmsChannelResponse(const UpdateSmsChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSmsChannelRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(UpdateSmsChannelResponse)
    Q_DISABLE_COPY(UpdateSmsChannelResponse)

};

} // namespace Pinpoint
} // namespace AWS

#endif
