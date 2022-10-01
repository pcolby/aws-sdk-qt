// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTENDEETAGSREQUEST_P_H
#define QTAWS_LISTATTENDEETAGSREQUEST_P_H

#include "chimerequest_p.h"
#include "listattendeetagsrequest.h"

namespace QtAws {
namespace Chime {

class ListAttendeeTagsRequest;

class ListAttendeeTagsRequestPrivate : public ChimeRequestPrivate {

public:
    ListAttendeeTagsRequestPrivate(const ChimeRequest::Action action,
                                   ListAttendeeTagsRequest * const q);
    ListAttendeeTagsRequestPrivate(const ListAttendeeTagsRequestPrivate &other,
                                   ListAttendeeTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAttendeeTagsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
