// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATIONSFORLICENSECONFIGURATIONREQUEST_P_H
#define QTAWS_LISTASSOCIATIONSFORLICENSECONFIGURATIONREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "listassociationsforlicenseconfigurationrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListAssociationsForLicenseConfigurationRequest;

class ListAssociationsForLicenseConfigurationRequestPrivate : public LicenseManagerRequestPrivate {

public:
    ListAssociationsForLicenseConfigurationRequestPrivate(const LicenseManagerRequest::Action action,
                                   ListAssociationsForLicenseConfigurationRequest * const q);
    ListAssociationsForLicenseConfigurationRequestPrivate(const ListAssociationsForLicenseConfigurationRequestPrivate &other,
                                   ListAssociationsForLicenseConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAssociationsForLicenseConfigurationRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
