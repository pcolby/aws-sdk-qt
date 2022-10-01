// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLICENSESPECIFICATIONSFORRESOURCEREQUEST_P_H
#define QTAWS_LISTLICENSESPECIFICATIONSFORRESOURCEREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "listlicensespecificationsforresourcerequest.h"

namespace QtAws {
namespace LicenseManager {

class ListLicenseSpecificationsForResourceRequest;

class ListLicenseSpecificationsForResourceRequestPrivate : public LicenseManagerRequestPrivate {

public:
    ListLicenseSpecificationsForResourceRequestPrivate(const LicenseManagerRequest::Action action,
                                   ListLicenseSpecificationsForResourceRequest * const q);
    ListLicenseSpecificationsForResourceRequestPrivate(const ListLicenseSpecificationsForResourceRequestPrivate &other,
                                   ListLicenseSpecificationsForResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLicenseSpecificationsForResourceRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
