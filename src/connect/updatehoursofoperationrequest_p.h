// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHOURSOFOPERATIONREQUEST_P_H
#define QTAWS_UPDATEHOURSOFOPERATIONREQUEST_P_H

#include "connectrequest_p.h"
#include "updatehoursofoperationrequest.h"

namespace QtAws {
namespace Connect {

class UpdateHoursOfOperationRequest;

class UpdateHoursOfOperationRequestPrivate : public ConnectRequestPrivate {

public:
    UpdateHoursOfOperationRequestPrivate(const ConnectRequest::Action action,
                                   UpdateHoursOfOperationRequest * const q);
    UpdateHoursOfOperationRequestPrivate(const UpdateHoursOfOperationRequestPrivate &other,
                                   UpdateHoursOfOperationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateHoursOfOperationRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
