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

#ifndef QTAWS_DELETEADMCHANNELRESPONSE_H
#define QTAWS_DELETEADMCHANNELRESPONSE_H

#include "pinpointresponse.h"
#include "deleteadmchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteAdmChannelResponsePrivate;

class QTAWS_EXPORT DeleteAdmChannelResponse : public PinpointResponse {
    Q_OBJECT

public:
    DeleteAdmChannelResponse(const DeleteAdmChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAdmChannelRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DeleteAdmChannelResponse)
    Q_DISABLE_COPY(DeleteAdmChannelResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
