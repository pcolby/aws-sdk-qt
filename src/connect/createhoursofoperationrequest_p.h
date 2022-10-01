// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHOURSOFOPERATIONREQUEST_P_H
#define QTAWS_CREATEHOURSOFOPERATIONREQUEST_P_H

#include "connectrequest_p.h"
#include "createhoursofoperationrequest.h"

namespace QtAws {
namespace Connect {

class CreateHoursOfOperationRequest;

class CreateHoursOfOperationRequestPrivate : public ConnectRequestPrivate {

public:
    CreateHoursOfOperationRequestPrivate(const ConnectRequest::Action action,
                                   CreateHoursOfOperationRequest * const q);
    CreateHoursOfOperationRequestPrivate(const CreateHoursOfOperationRequestPrivate &other,
                                   CreateHoursOfOperationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateHoursOfOperationRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
