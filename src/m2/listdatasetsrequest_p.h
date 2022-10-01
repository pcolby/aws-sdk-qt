// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETSREQUEST_P_H
#define QTAWS_LISTDATASETSREQUEST_P_H

#include "m2request_p.h"
#include "listdatasetsrequest.h"

namespace QtAws {
namespace M2 {

class ListDataSetsRequest;

class ListDataSetsRequestPrivate : public M2RequestPrivate {

public:
    ListDataSetsRequestPrivate(const M2Request::Action action,
                                   ListDataSetsRequest * const q);
    ListDataSetsRequestPrivate(const ListDataSetsRequestPrivate &other,
                                   ListDataSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDataSetsRequest)

};

} // namespace M2
} // namespace QtAws

#endif
