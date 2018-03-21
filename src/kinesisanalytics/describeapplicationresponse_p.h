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

#ifndef QTAWS_DESCRIBEAPPLICATIONRESPONSE_P_H
#define QTAWS_DESCRIBEAPPLICATIONRESPONSE_P_H

#include "kinesisanalyticsresponse.h"
#include "describeapplicationrequest.h"

namespace AWS {

namespace KinesisAnalytics {

class DescribeApplicationResponse;

class QTAWS_EXPORT DescribeApplicationResponsePrivate : public KinesisAnalyticsResponsePrivate {
    Q_OBJECT

public:

    DescribeApplicationResponsePrivate(DescribeApplicationResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeApplicationResponse)
    Q_DISABLE_COPY(DescribeApplicationResponsePrivate)

};

} // namespace KinesisAnalytics
} // namespace AWS

#endif
