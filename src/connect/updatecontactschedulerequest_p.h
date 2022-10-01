// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTSCHEDULEREQUEST_P_H
#define QTAWS_UPDATECONTACTSCHEDULEREQUEST_P_H

#include "connectrequest_p.h"
#include "updatecontactschedulerequest.h"

namespace QtAws {
namespace Connect {

class UpdateContactScheduleRequest;

class UpdateContactScheduleRequestPrivate : public ConnectRequestPrivate {

public:
    UpdateContactScheduleRequestPrivate(const ConnectRequest::Action action,
                                   UpdateContactScheduleRequest * const q);
    UpdateContactScheduleRequestPrivate(const UpdateContactScheduleRequestPrivate &other,
                                   UpdateContactScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateContactScheduleRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
