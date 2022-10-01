// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFUOTATASKSREQUEST_P_H
#define QTAWS_LISTFUOTATASKSREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "listfuotatasksrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListFuotaTasksRequest;

class ListFuotaTasksRequestPrivate : public IoTWirelessRequestPrivate {

public:
    ListFuotaTasksRequestPrivate(const IoTWirelessRequest::Action action,
                                   ListFuotaTasksRequest * const q);
    ListFuotaTasksRequestPrivate(const ListFuotaTasksRequestPrivate &other,
                                   ListFuotaTasksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFuotaTasksRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
