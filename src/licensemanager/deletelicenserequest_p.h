// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELICENSEREQUEST_P_H
#define QTAWS_DELETELICENSEREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "deletelicenserequest.h"

namespace QtAws {
namespace LicenseManager {

class DeleteLicenseRequest;

class DeleteLicenseRequestPrivate : public LicenseManagerRequestPrivate {

public:
    DeleteLicenseRequestPrivate(const LicenseManagerRequest::Action action,
                                   DeleteLicenseRequest * const q);
    DeleteLicenseRequestPrivate(const DeleteLicenseRequestPrivate &other,
                                   DeleteLicenseRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLicenseRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
