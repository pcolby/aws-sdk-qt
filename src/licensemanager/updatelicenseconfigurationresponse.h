// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELICENSECONFIGURATIONRESPONSE_H
#define QTAWS_UPDATELICENSECONFIGURATIONRESPONSE_H

#include "licensemanagerresponse.h"
#include "updatelicenseconfigurationrequest.h"

namespace QtAws {
namespace LicenseManager {

class UpdateLicenseConfigurationResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT UpdateLicenseConfigurationResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    UpdateLicenseConfigurationResponse(const UpdateLicenseConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateLicenseConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLicenseConfigurationResponse)
    Q_DISABLE_COPY(UpdateLicenseConfigurationResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
