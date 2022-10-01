// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETHINGFROMBILLINGGROUPRESPONSE_P_H
#define QTAWS_REMOVETHINGFROMBILLINGGROUPRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class RemoveThingFromBillingGroupResponse;

class RemoveThingFromBillingGroupResponsePrivate : public IoTResponsePrivate {

public:

    explicit RemoveThingFromBillingGroupResponsePrivate(RemoveThingFromBillingGroupResponse * const q);

    void parseRemoveThingFromBillingGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveThingFromBillingGroupResponse)
    Q_DISABLE_COPY(RemoveThingFromBillingGroupResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
