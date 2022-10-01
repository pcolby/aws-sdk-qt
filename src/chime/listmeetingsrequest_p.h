// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEETINGSREQUEST_P_H
#define QTAWS_LISTMEETINGSREQUEST_P_H

#include "chimerequest_p.h"
#include "listmeetingsrequest.h"

namespace QtAws {
namespace Chime {

class ListMeetingsRequest;

class ListMeetingsRequestPrivate : public ChimeRequestPrivate {

public:
    ListMeetingsRequestPrivate(const ChimeRequest::Action action,
                                   ListMeetingsRequest * const q);
    ListMeetingsRequestPrivate(const ListMeetingsRequestPrivate &other,
                                   ListMeetingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMeetingsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
