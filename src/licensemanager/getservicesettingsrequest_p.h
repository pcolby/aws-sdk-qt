// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICESETTINGSREQUEST_P_H
#define QTAWS_GETSERVICESETTINGSREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "getservicesettingsrequest.h"

namespace QtAws {
namespace LicenseManager {

class GetServiceSettingsRequest;

class GetServiceSettingsRequestPrivate : public LicenseManagerRequestPrivate {

public:
    GetServiceSettingsRequestPrivate(const LicenseManagerRequest::Action action,
                                   GetServiceSettingsRequest * const q);
    GetServiceSettingsRequestPrivate(const GetServiceSettingsRequestPrivate &other,
                                   GetServiceSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetServiceSettingsRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
