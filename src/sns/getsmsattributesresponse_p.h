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

#ifndef QTAWS_GETSMSATTRIBUTESRESPONSE_P_H
#define QTAWS_GETSMSATTRIBUTESRESPONSE_P_H

#include "snsresponse.h"
#include "getsmsattributesrequest.h"

namespace QtAws {
namespace SNS {

class GetSMSAttributesResponse;

class QTAWS_EXPORT GetSMSAttributesResponsePrivate : public SNSResponsePrivate {
    Q_OBJECT

public:

    GetSMSAttributesResponsePrivate(GetSMSAttributesResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSMSAttributesResponse)
    Q_DISABLE_COPY(GetSMSAttributesResponsePrivate)

};

} // namespace SNS
} // namespace QtAws

#endif
