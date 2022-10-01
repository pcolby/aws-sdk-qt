// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICESETTINGSREQUEST_H
#define QTAWS_GETSERVICESETTINGSREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class GetServiceSettingsRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT GetServiceSettingsRequest : public LicenseManagerRequest {

public:
    GetServiceSettingsRequest(const GetServiceSettingsRequest &other);
    GetServiceSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServiceSettingsRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
