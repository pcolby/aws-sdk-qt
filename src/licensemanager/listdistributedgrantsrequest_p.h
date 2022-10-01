// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTEDGRANTSREQUEST_P_H
#define QTAWS_LISTDISTRIBUTEDGRANTSREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "listdistributedgrantsrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListDistributedGrantsRequest;

class ListDistributedGrantsRequestPrivate : public LicenseManagerRequestPrivate {

public:
    ListDistributedGrantsRequestPrivate(const LicenseManagerRequest::Action action,
                                   ListDistributedGrantsRequest * const q);
    ListDistributedGrantsRequestPrivate(const ListDistributedGrantsRequestPrivate &other,
                                   ListDistributedGrantsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDistributedGrantsRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
