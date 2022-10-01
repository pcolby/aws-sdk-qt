// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHOURSOFOPERATIONRESPONSE_P_H
#define QTAWS_DESCRIBEHOURSOFOPERATIONRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DescribeHoursOfOperationResponse;

class DescribeHoursOfOperationResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DescribeHoursOfOperationResponsePrivate(DescribeHoursOfOperationResponse * const q);

    void parseDescribeHoursOfOperationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeHoursOfOperationResponse)
    Q_DISABLE_COPY(DescribeHoursOfOperationResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
