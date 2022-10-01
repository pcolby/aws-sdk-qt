// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEETINGTAGSREQUEST_P_H
#define QTAWS_LISTMEETINGTAGSREQUEST_P_H

#include "chimerequest_p.h"
#include "listmeetingtagsrequest.h"

namespace QtAws {
namespace Chime {

class ListMeetingTagsRequest;

class ListMeetingTagsRequestPrivate : public ChimeRequestPrivate {

public:
    ListMeetingTagsRequestPrivate(const ChimeRequest::Action action,
                                   ListMeetingTagsRequest * const q);
    ListMeetingTagsRequestPrivate(const ListMeetingTagsRequestPrivate &other,
                                   ListMeetingTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMeetingTagsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
