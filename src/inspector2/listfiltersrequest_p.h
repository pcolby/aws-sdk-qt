// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFILTERSREQUEST_P_H
#define QTAWS_LISTFILTERSREQUEST_P_H

#include "inspector2request_p.h"
#include "listfiltersrequest.h"

namespace QtAws {
namespace Inspector2 {

class ListFiltersRequest;

class ListFiltersRequestPrivate : public Inspector2RequestPrivate {

public:
    ListFiltersRequestPrivate(const Inspector2Request::Action action,
                                   ListFiltersRequest * const q);
    ListFiltersRequestPrivate(const ListFiltersRequestPrivate &other,
                                   ListFiltersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFiltersRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
