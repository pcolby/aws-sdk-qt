// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETATTENDEEREQUEST_P_H
#define QTAWS_GETATTENDEEREQUEST_P_H

#include "chimerequest_p.h"
#include "getattendeerequest.h"

namespace QtAws {
namespace Chime {

class GetAttendeeRequest;

class GetAttendeeRequestPrivate : public ChimeRequestPrivate {

public:
    GetAttendeeRequestPrivate(const ChimeRequest::Action action,
                                   GetAttendeeRequest * const q);
    GetAttendeeRequestPrivate(const GetAttendeeRequestPrivate &other,
                                   GetAttendeeRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAttendeeRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
