// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRETAINEDMESSAGESREQUEST_P_H
#define QTAWS_LISTRETAINEDMESSAGESREQUEST_P_H

#include "iotdataplanerequest_p.h"
#include "listretainedmessagesrequest.h"

namespace QtAws {
namespace IoTDataPlane {

class ListRetainedMessagesRequest;

class ListRetainedMessagesRequestPrivate : public IoTDataPlaneRequestPrivate {

public:
    ListRetainedMessagesRequestPrivate(const IoTDataPlaneRequest::Action action,
                                   ListRetainedMessagesRequest * const q);
    ListRetainedMessagesRequestPrivate(const ListRetainedMessagesRequestPrivate &other,
                                   ListRetainedMessagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRetainedMessagesRequest)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif
