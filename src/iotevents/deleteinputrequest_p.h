// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINPUTREQUEST_P_H
#define QTAWS_DELETEINPUTREQUEST_P_H

#include "ioteventsrequest_p.h"
#include "deleteinputrequest.h"

namespace QtAws {
namespace IoTEvents {

class DeleteInputRequest;

class DeleteInputRequestPrivate : public IoTEventsRequestPrivate {

public:
    DeleteInputRequestPrivate(const IoTEventsRequest::Action action,
                                   DeleteInputRequest * const q);
    DeleteInputRequestPrivate(const DeleteInputRequestPrivate &other,
                                   DeleteInputRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteInputRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
