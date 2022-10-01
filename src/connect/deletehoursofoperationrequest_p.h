// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHOURSOFOPERATIONREQUEST_P_H
#define QTAWS_DELETEHOURSOFOPERATIONREQUEST_P_H

#include "connectrequest_p.h"
#include "deletehoursofoperationrequest.h"

namespace QtAws {
namespace Connect {

class DeleteHoursOfOperationRequest;

class DeleteHoursOfOperationRequestPrivate : public ConnectRequestPrivate {

public:
    DeleteHoursOfOperationRequestPrivate(const ConnectRequest::Action action,
                                   DeleteHoursOfOperationRequest * const q);
    DeleteHoursOfOperationRequestPrivate(const DeleteHoursOfOperationRequestPrivate &other,
                                   DeleteHoursOfOperationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteHoursOfOperationRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
