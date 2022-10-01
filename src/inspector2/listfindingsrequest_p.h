// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFINDINGSREQUEST_P_H
#define QTAWS_LISTFINDINGSREQUEST_P_H

#include "inspector2request_p.h"
#include "listfindingsrequest.h"

namespace QtAws {
namespace Inspector2 {

class ListFindingsRequest;

class ListFindingsRequestPrivate : public Inspector2RequestPrivate {

public:
    ListFindingsRequestPrivate(const Inspector2Request::Action action,
                                   ListFindingsRequest * const q);
    ListFindingsRequestPrivate(const ListFindingsRequestPrivate &other,
                                   ListFindingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFindingsRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
