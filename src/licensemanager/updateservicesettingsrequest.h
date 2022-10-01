// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICESETTINGSREQUEST_H
#define QTAWS_UPDATESERVICESETTINGSREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class UpdateServiceSettingsRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT UpdateServiceSettingsRequest : public LicenseManagerRequest {

public:
    UpdateServiceSettingsRequest(const UpdateServiceSettingsRequest &other);
    UpdateServiceSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateServiceSettingsRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
