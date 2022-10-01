// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLICENSECONFIGURATIONRESPONSE_H
#define QTAWS_GETLICENSECONFIGURATIONRESPONSE_H

#include "licensemanagerresponse.h"
#include "getlicenseconfigurationrequest.h"

namespace QtAws {
namespace LicenseManager {

class GetLicenseConfigurationResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT GetLicenseConfigurationResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    GetLicenseConfigurationResponse(const GetLicenseConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLicenseConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLicenseConfigurationResponse)
    Q_DISABLE_COPY(GetLicenseConfigurationResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
