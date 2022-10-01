// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICESETTINGSREQUEST_P_H
#define QTAWS_UPDATESERVICESETTINGSREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "updateservicesettingsrequest.h"

namespace QtAws {
namespace LicenseManager {

class UpdateServiceSettingsRequest;

class UpdateServiceSettingsRequestPrivate : public LicenseManagerRequestPrivate {

public:
    UpdateServiceSettingsRequestPrivate(const LicenseManagerRequest::Action action,
                                   UpdateServiceSettingsRequest * const q);
    UpdateServiceSettingsRequestPrivate(const UpdateServiceSettingsRequestPrivate &other,
                                   UpdateServiceSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateServiceSettingsRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
