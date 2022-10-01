// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELICENSEVERSIONREQUEST_P_H
#define QTAWS_CREATELICENSEVERSIONREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "createlicenseversionrequest.h"

namespace QtAws {
namespace LicenseManager {

class CreateLicenseVersionRequest;

class CreateLicenseVersionRequestPrivate : public LicenseManagerRequestPrivate {

public:
    CreateLicenseVersionRequestPrivate(const LicenseManagerRequest::Action action,
                                   CreateLicenseVersionRequest * const q);
    CreateLicenseVersionRequestPrivate(const CreateLicenseVersionRequestPrivate &other,
                                   CreateLicenseVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLicenseVersionRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
