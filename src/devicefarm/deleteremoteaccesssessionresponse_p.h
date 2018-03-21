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

#ifndef QTAWS_DELETEREMOTEACCESSSESSIONRESPONSE_P_H
#define QTAWS_DELETEREMOTEACCESSSESSIONRESPONSE_P_H

#include "devicefarmresponse.h"
#include "deleteremoteaccesssessionrequest.h"

namespace AWS {

namespace DeviceFarm {

class DeleteRemoteAccessSessionResponse;

class QTAWS_EXPORT DeleteRemoteAccessSessionResponsePrivate : public DeviceFarmResponsePrivate {
    Q_OBJECT

public:

    DeleteRemoteAccessSessionResponsePrivate(DeleteRemoteAccessSessionResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRemoteAccessSessionResponse)
    Q_DISABLE_COPY(DeleteRemoteAccessSessionResponsePrivate)

};

} // namespace DeviceFarm
} // namespace AWS

#endif
