// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGSINBILLINGGROUPRESPONSE_P_H
#define QTAWS_LISTTHINGSINBILLINGGROUPRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListThingsInBillingGroupResponse;

class ListThingsInBillingGroupResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListThingsInBillingGroupResponsePrivate(ListThingsInBillingGroupResponse * const q);

    void parseListThingsInBillingGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListThingsInBillingGroupResponse)
    Q_DISABLE_COPY(ListThingsInBillingGroupResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
