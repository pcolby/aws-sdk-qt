// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBILLINGGROUPRESPONSE_P_H
#define QTAWS_DELETEBILLINGGROUPRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DeleteBillingGroupResponse;

class DeleteBillingGroupResponsePrivate : public IoTResponsePrivate {

public:

    explicit DeleteBillingGroupResponsePrivate(DeleteBillingGroupResponse * const q);

    void parseDeleteBillingGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBillingGroupResponse)
    Q_DISABLE_COPY(DeleteBillingGroupResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
