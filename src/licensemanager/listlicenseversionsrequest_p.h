// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLICENSEVERSIONSREQUEST_P_H
#define QTAWS_LISTLICENSEVERSIONSREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "listlicenseversionsrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListLicenseVersionsRequest;

class ListLicenseVersionsRequestPrivate : public LicenseManagerRequestPrivate {

public:
    ListLicenseVersionsRequestPrivate(const LicenseManagerRequest::Action action,
                                   ListLicenseVersionsRequest * const q);
    ListLicenseVersionsRequestPrivate(const ListLicenseVersionsRequestPrivate &other,
                                   ListLicenseVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLicenseVersionsRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
