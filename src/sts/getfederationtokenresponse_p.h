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

#ifndef QTAWS_GETFEDERATIONTOKENRESPONSE_P_H
#define QTAWS_GETFEDERATIONTOKENRESPONSE_P_H

#include "stsresponse_p.h"

namespace QtAws {
namespace STS {

class GetFederationTokenResponse;

class QTAWS_EXPORT GetFederationTokenResponsePrivate : public StsResponsePrivate {
    Q_OBJECT

public:

    GetFederationTokenResponsePrivate(GetFederationTokenResponse * const q);

    void parseGetFederationTokenResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFederationTokenResponse)
    Q_DISABLE_COPY(GetFederationTokenResponsePrivate)

};

} // namespace STS
} // namespace QtAws

#endif
