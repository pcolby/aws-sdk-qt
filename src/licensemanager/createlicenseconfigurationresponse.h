// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELICENSECONFIGURATIONRESPONSE_H
#define QTAWS_CREATELICENSECONFIGURATIONRESPONSE_H

#include "licensemanagerresponse.h"
#include "createlicenseconfigurationrequest.h"

namespace QtAws {
namespace LicenseManager {

class CreateLicenseConfigurationResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT CreateLicenseConfigurationResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    CreateLicenseConfigurationResponse(const CreateLicenseConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLicenseConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLicenseConfigurationResponse)
    Q_DISABLE_COPY(CreateLicenseConfigurationResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
