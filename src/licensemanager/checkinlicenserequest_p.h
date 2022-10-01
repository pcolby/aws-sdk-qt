// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKINLICENSEREQUEST_P_H
#define QTAWS_CHECKINLICENSEREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "checkinlicenserequest.h"

namespace QtAws {
namespace LicenseManager {

class CheckInLicenseRequest;

class CheckInLicenseRequestPrivate : public LicenseManagerRequestPrivate {

public:
    CheckInLicenseRequestPrivate(const LicenseManagerRequest::Action action,
                                   CheckInLicenseRequest * const q);
    CheckInLicenseRequestPrivate(const CheckInLicenseRequestPrivate &other,
                                   CheckInLicenseRequest * const q);

private:
    Q_DECLARE_PUBLIC(CheckInLicenseRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
