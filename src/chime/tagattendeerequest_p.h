// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGATTENDEEREQUEST_P_H
#define QTAWS_TAGATTENDEEREQUEST_P_H

#include "chimerequest_p.h"
#include "tagattendeerequest.h"

namespace QtAws {
namespace Chime {

class TagAttendeeRequest;

class TagAttendeeRequestPrivate : public ChimeRequestPrivate {

public:
    TagAttendeeRequestPrivate(const ChimeRequest::Action action,
                                   TagAttendeeRequest * const q);
    TagAttendeeRequestPrivate(const TagAttendeeRequestPrivate &other,
                                   TagAttendeeRequest * const q);

private:
    Q_DECLARE_PUBLIC(TagAttendeeRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
