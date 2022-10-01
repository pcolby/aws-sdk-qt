// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEATTENDEEREQUEST_P_H
#define QTAWS_DELETEATTENDEEREQUEST_P_H

#include "chimerequest_p.h"
#include "deleteattendeerequest.h"

namespace QtAws {
namespace Chime {

class DeleteAttendeeRequest;

class DeleteAttendeeRequestPrivate : public ChimeRequestPrivate {

public:
    DeleteAttendeeRequestPrivate(const ChimeRequest::Action action,
                                   DeleteAttendeeRequest * const q);
    DeleteAttendeeRequestPrivate(const DeleteAttendeeRequestPrivate &other,
                                   DeleteAttendeeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAttendeeRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
