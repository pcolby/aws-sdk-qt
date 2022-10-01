// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELICENSECONFIGURATIONRESPONSE_H
#define QTAWS_DELETELICENSECONFIGURATIONRESPONSE_H

#include "licensemanagerresponse.h"
#include "deletelicenseconfigurationrequest.h"

namespace QtAws {
namespace LicenseManager {

class DeleteLicenseConfigurationResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT DeleteLicenseConfigurationResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    DeleteLicenseConfigurationResponse(const DeleteLicenseConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLicenseConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLicenseConfigurationResponse)
    Q_DISABLE_COPY(DeleteLicenseConfigurationResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
