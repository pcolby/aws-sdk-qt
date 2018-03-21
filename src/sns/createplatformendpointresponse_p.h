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

#ifndef QTAWS_CREATEPLATFORMENDPOINTRESPONSE_P_H
#define QTAWS_CREATEPLATFORMENDPOINTRESPONSE_P_H

#include "snsresponse.h"
#include "createplatformendpointrequest.h"

namespace AWS {

namespace SNS {

class CreatePlatformEndpointResponse;

class QTAWS_EXPORT CreatePlatformEndpointResponsePrivate : public SNSResponsePrivate {
    Q_OBJECT

public:

    CreatePlatformEndpointResponsePrivate(CreatePlatformEndpointResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePlatformEndpointResponse)
    Q_DISABLE_COPY(CreatePlatformEndpointResponsePrivate)

};

} // namespace SNS
} // namespace AWS

#endif
