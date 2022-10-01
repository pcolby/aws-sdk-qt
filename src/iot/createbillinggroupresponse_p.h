// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBILLINGGROUPRESPONSE_P_H
#define QTAWS_CREATEBILLINGGROUPRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class CreateBillingGroupResponse;

class CreateBillingGroupResponsePrivate : public IoTResponsePrivate {

public:

    explicit CreateBillingGroupResponsePrivate(CreateBillingGroupResponse * const q);

    void parseCreateBillingGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBillingGroupResponse)
    Q_DISABLE_COPY(CreateBillingGroupResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
