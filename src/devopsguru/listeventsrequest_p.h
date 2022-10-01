// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTSREQUEST_P_H
#define QTAWS_LISTEVENTSREQUEST_P_H

#include "devopsgururequest_p.h"
#include "listeventsrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class ListEventsRequest;

class ListEventsRequestPrivate : public DevOpsGuruRequestPrivate {

public:
    ListEventsRequestPrivate(const DevOpsGuruRequest::Action action,
                                   ListEventsRequest * const q);
    ListEventsRequestPrivate(const ListEventsRequestPrivate &other,
                                   ListEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEventsRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
