// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLAUNCHPATHSREQUEST_P_H
#define QTAWS_LISTLAUNCHPATHSREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "listlaunchpathsrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListLaunchPathsRequest;

class ListLaunchPathsRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    ListLaunchPathsRequestPrivate(const ServiceCatalogRequest::Action action,
                                   ListLaunchPathsRequest * const q);
    ListLaunchPathsRequestPrivate(const ListLaunchPathsRequestPrivate &other,
                                   ListLaunchPathsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLaunchPathsRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
