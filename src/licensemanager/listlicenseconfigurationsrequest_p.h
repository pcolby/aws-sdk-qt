// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLICENSECONFIGURATIONSREQUEST_P_H
#define QTAWS_LISTLICENSECONFIGURATIONSREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "listlicenseconfigurationsrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListLicenseConfigurationsRequest;

class ListLicenseConfigurationsRequestPrivate : public LicenseManagerRequestPrivate {

public:
    ListLicenseConfigurationsRequestPrivate(const LicenseManagerRequest::Action action,
                                   ListLicenseConfigurationsRequest * const q);
    ListLicenseConfigurationsRequestPrivate(const ListLicenseConfigurationsRequestPrivate &other,
                                   ListLicenseConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLicenseConfigurationsRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
