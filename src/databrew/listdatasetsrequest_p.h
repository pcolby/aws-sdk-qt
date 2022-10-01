// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETSREQUEST_P_H
#define QTAWS_LISTDATASETSREQUEST_P_H

#include "databrewrequest_p.h"
#include "listdatasetsrequest.h"

namespace QtAws {
namespace DataBrew {

class ListDatasetsRequest;

class ListDatasetsRequestPrivate : public DataBrewRequestPrivate {

public:
    ListDatasetsRequestPrivate(const DataBrewRequest::Action action,
                                   ListDatasetsRequest * const q);
    ListDatasetsRequestPrivate(const ListDatasetsRequestPrivate &other,
                                   ListDatasetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDatasetsRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
