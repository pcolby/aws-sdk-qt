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

#ifndef QTAWS_LISTEMAILIDENTITIESRESPONSE_P_H
#define QTAWS_LISTEMAILIDENTITIESRESPONSE_P_H

#include "pinpointemailresponse_p.h"

namespace QtAws {
namespace PinpointEmail {

class ListEmailIdentitiesResponse;

class QTAWS_EXPORT ListEmailIdentitiesResponsePrivate : public PinpointEmailResponsePrivate {

public:

    ListEmailIdentitiesResponsePrivate(ListEmailIdentitiesResponse * const q);

    void parseListEmailIdentitiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEmailIdentitiesResponse)
    Q_DISABLE_COPY(ListEmailIdentitiesResponsePrivate)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
