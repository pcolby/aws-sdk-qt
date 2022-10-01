// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFINDINGSFILTERSREQUEST_P_H
#define QTAWS_LISTFINDINGSFILTERSREQUEST_P_H

#include "macie2request_p.h"
#include "listfindingsfiltersrequest.h"

namespace QtAws {
namespace Macie2 {

class ListFindingsFiltersRequest;

class ListFindingsFiltersRequestPrivate : public Macie2RequestPrivate {

public:
    ListFindingsFiltersRequestPrivate(const Macie2Request::Action action,
                                   ListFindingsFiltersRequest * const q);
    ListFindingsFiltersRequestPrivate(const ListFindingsFiltersRequestPrivate &other,
                                   ListFindingsFiltersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFindingsFiltersRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
