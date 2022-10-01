// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELICENSEREQUEST_P_H
#define QTAWS_CREATELICENSEREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "createlicenserequest.h"

namespace QtAws {
namespace LicenseManager {

class CreateLicenseRequest;

class CreateLicenseRequestPrivate : public LicenseManagerRequestPrivate {

public:
    CreateLicenseRequestPrivate(const LicenseManagerRequest::Action action,
                                   CreateLicenseRequest * const q);
    CreateLicenseRequestPrivate(const CreateLicenseRequestPrivate &other,
                                   CreateLicenseRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLicenseRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
