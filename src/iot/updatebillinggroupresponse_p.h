// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBILLINGGROUPRESPONSE_P_H
#define QTAWS_UPDATEBILLINGGROUPRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class UpdateBillingGroupResponse;

class UpdateBillingGroupResponsePrivate : public IoTResponsePrivate {

public:

    explicit UpdateBillingGroupResponsePrivate(UpdateBillingGroupResponse * const q);

    void parseUpdateBillingGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateBillingGroupResponse)
    Q_DISABLE_COPY(UpdateBillingGroupResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
