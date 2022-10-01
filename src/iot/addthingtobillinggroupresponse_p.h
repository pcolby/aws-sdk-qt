// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTHINGTOBILLINGGROUPRESPONSE_P_H
#define QTAWS_ADDTHINGTOBILLINGGROUPRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class AddThingToBillingGroupResponse;

class AddThingToBillingGroupResponsePrivate : public IoTResponsePrivate {

public:

    explicit AddThingToBillingGroupResponsePrivate(AddThingToBillingGroupResponse * const q);

    void parseAddThingToBillingGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddThingToBillingGroupResponse)
    Q_DISABLE_COPY(AddThingToBillingGroupResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
