// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETHINGTYPERESPONSE_P_H
#define QTAWS_DESCRIBETHINGTYPERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DescribeThingTypeResponse;

class DescribeThingTypeResponsePrivate : public IoTResponsePrivate {

public:

    explicit DescribeThingTypeResponsePrivate(DescribeThingTypeResponse * const q);

    void parseDescribeThingTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeThingTypeResponse)
    Q_DISABLE_COPY(DescribeThingTypeResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
