// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASOURCEPACKAGESREQUEST_P_H
#define QTAWS_LISTDATASOURCEPACKAGESREQUEST_P_H

#include "detectiverequest_p.h"
#include "listdatasourcepackagesrequest.h"

namespace QtAws {
namespace Detective {

class ListDatasourcePackagesRequest;

class ListDatasourcePackagesRequestPrivate : public DetectiveRequestPrivate {

public:
    ListDatasourcePackagesRequestPrivate(const DetectiveRequest::Action action,
                                   ListDatasourcePackagesRequest * const q);
    ListDatasourcePackagesRequestPrivate(const ListDatasourcePackagesRequestPrivate &other,
                                   ListDatasourcePackagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDatasourcePackagesRequest)

};

} // namespace Detective
} // namespace QtAws

#endif
