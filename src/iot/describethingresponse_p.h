// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETHINGRESPONSE_P_H
#define QTAWS_DESCRIBETHINGRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DescribeThingResponse;

class DescribeThingResponsePrivate : public IoTResponsePrivate {

public:

    explicit DescribeThingResponsePrivate(DescribeThingResponse * const q);

    void parseDescribeThingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeThingResponse)
    Q_DISABLE_COPY(DescribeThingResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
