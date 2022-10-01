// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFLEETSREQUEST_P_H
#define QTAWS_LISTFLEETSREQUEST_P_H

#include "worklinkrequest_p.h"
#include "listfleetsrequest.h"

namespace QtAws {
namespace WorkLink {

class ListFleetsRequest;

class ListFleetsRequestPrivate : public WorkLinkRequestPrivate {

public:
    ListFleetsRequestPrivate(const WorkLinkRequest::Action action,
                                   ListFleetsRequest * const q);
    ListFleetsRequestPrivate(const ListFleetsRequestPrivate &other,
                                   ListFleetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFleetsRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
