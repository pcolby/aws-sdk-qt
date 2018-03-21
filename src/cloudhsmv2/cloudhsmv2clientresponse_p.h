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

#ifndef QTAWS_CLOUDHSMV2CLIENTRESPONSE_P_H
#define QTAWS_CLOUDHSMV2CLIENTRESPONSE_P_H

#include "response.h"
#include "cloudhsmv2clientrequest.h"

namespace AWS {

namespace  {

class CloudHSMV2ClientResponse;

class QTAWS_EXPORT CloudHSMV2ClientResponsePrivate : public AwsAbstractResponsePrivate {
    Q_OBJECT

public:

    CloudHSMV2ClientResponsePrivate(CloudHSMV2ClientResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CloudHSMV2ClientResponse)
    Q_DISABLE_COPY(CloudHSMV2ClientResponsePrivate)

};

} // namespace 
} // namespace AWS

#endif
