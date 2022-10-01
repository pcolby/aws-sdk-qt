// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFINDINGSREQUEST_P_H
#define QTAWS_LISTFINDINGSREQUEST_P_H

#include "inspectorrequest_p.h"
#include "listfindingsrequest.h"

namespace QtAws {
namespace Inspector {

class ListFindingsRequest;

class ListFindingsRequestPrivate : public InspectorRequestPrivate {

public:
    ListFindingsRequestPrivate(const InspectorRequest::Action action,
                                   ListFindingsRequest * const q);
    ListFindingsRequestPrivate(const ListFindingsRequestPrivate &other,
                                   ListFindingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFindingsRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
