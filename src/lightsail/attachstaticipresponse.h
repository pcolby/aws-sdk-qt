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

#ifndef QTAWS_ATTACHSTATICIPRESPONSE_H
#define QTAWS_ATTACHSTATICIPRESPONSE_H

#include "lightsailresponse.h"
#include "attachstaticiprequest.h"

namespace AWS {

namespace Lightsail {

class AttachStaticIpResponsePrivate;

class QTAWS_EXPORT AttachStaticIpResponse : public LightsailResponse {
    Q_OBJECT

public:
    AttachStaticIpResponse(const AttachStaticIpRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AttachStaticIpRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(AttachStaticIpResponse)
    Q_DISABLE_COPY(AttachStaticIpResponse)

};

} // namespace Lightsail
} // namespace AWS

#endif
