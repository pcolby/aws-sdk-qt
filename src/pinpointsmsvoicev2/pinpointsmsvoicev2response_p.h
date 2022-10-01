/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_PINPOINTSMSVOICEV2RESPONSE_P_H
#define QTAWS_PINPOINTSMSVOICEV2RESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class PinpointSmsVoiceV2Response;

class PinpointSmsVoiceV2ResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit PinpointSmsVoiceV2ResponsePrivate(PinpointSmsVoiceV2Response * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PinpointSmsVoiceV2Response)
    Q_DISABLE_COPY(PinpointSmsVoiceV2ResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
