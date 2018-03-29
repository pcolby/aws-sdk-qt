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

#ifndef QTAWS_DESCRIBEFLEETATTRIBUTESRESPONSE_P_H
#define QTAWS_DESCRIBEFLEETATTRIBUTESRESPONSE_P_H

#include "gameliftresponse.h"
#include "describefleetattributesrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeFleetAttributesResponse;

class QTAWS_EXPORT DescribeFleetAttributesResponsePrivate : public GameLiftResponsePrivate {
    Q_OBJECT

public:

    DescribeFleetAttributesResponsePrivate(DescribeFleetAttributesResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFleetAttributesResponse)
    Q_DISABLE_COPY(DescribeFleetAttributesResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
