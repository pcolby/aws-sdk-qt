// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEATTENDEEREQUEST_P_H
#define QTAWS_CREATEATTENDEEREQUEST_P_H

#include "chimerequest_p.h"
#include "createattendeerequest.h"

namespace QtAws {
namespace Chime {

class CreateAttendeeRequest;

class CreateAttendeeRequestPrivate : public ChimeRequestPrivate {

public:
    CreateAttendeeRequestPrivate(const ChimeRequest::Action action,
                                   CreateAttendeeRequest * const q);
    CreateAttendeeRequestPrivate(const CreateAttendeeRequestPrivate &other,
                                   CreateAttendeeRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAttendeeRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
