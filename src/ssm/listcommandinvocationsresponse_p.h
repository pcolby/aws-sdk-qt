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

#ifndef QTAWS_LISTCOMMANDINVOCATIONSRESPONSE_P_H
#define QTAWS_LISTCOMMANDINVOCATIONSRESPONSE_P_H

#include "ssmresponse.h"
#include "listcommandinvocationsrequest.h"

namespace AWS {

namespace SSM {

class ListCommandInvocationsResponse;

class QTAWS_EXPORT ListCommandInvocationsResponsePrivate : public SSMResponsePrivate {
    Q_OBJECT

public:

    ListCommandInvocationsResponsePrivate(ListCommandInvocationsResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCommandInvocationsResponse)
    Q_DISABLE_COPY(ListCommandInvocationsResponsePrivate)

};

} // namespace SSM
} // namespace AWS

#endif
