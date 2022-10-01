// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSAGEFORLICENSECONFIGURATIONRESPONSE_H
#define QTAWS_LISTUSAGEFORLICENSECONFIGURATIONRESPONSE_H

#include "licensemanagerresponse.h"
#include "listusageforlicenseconfigurationrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListUsageForLicenseConfigurationResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT ListUsageForLicenseConfigurationResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    ListUsageForLicenseConfigurationResponse(const ListUsageForLicenseConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListUsageForLicenseConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUsageForLicenseConfigurationResponse)
    Q_DISABLE_COPY(ListUsageForLicenseConfigurationResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
