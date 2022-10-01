// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTACTRESPONSE_P_H
#define QTAWS_DESCRIBECONTACTRESPONSE_P_H

#include "groundstationresponse_p.h"

namespace QtAws {
namespace GroundStation {

class DescribeContactResponse;

class DescribeContactResponsePrivate : public GroundStationResponsePrivate {

public:

    explicit DescribeContactResponsePrivate(DescribeContactResponse * const q);

    void parseDescribeContactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeContactResponse)
    Q_DISABLE_COPY(DescribeContactResponsePrivate)

};

} // namespace GroundStation
} // namespace QtAws

#endif
