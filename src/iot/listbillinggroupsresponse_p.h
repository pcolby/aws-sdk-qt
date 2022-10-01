// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBILLINGGROUPSRESPONSE_P_H
#define QTAWS_LISTBILLINGGROUPSRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class ListBillingGroupsResponse;

class ListBillingGroupsResponsePrivate : public IoTResponsePrivate {

public:

    explicit ListBillingGroupsResponsePrivate(ListBillingGroupsResponse * const q);

    void parseListBillingGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBillingGroupsResponse)
    Q_DISABLE_COPY(ListBillingGroupsResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
