// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFAILURESFORLICENSECONFIGURATIONOPERATIONSRESPONSE_H
#define QTAWS_LISTFAILURESFORLICENSECONFIGURATIONOPERATIONSRESPONSE_H

#include "licensemanagerresponse.h"
#include "listfailuresforlicenseconfigurationoperationsrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListFailuresForLicenseConfigurationOperationsResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT ListFailuresForLicenseConfigurationOperationsResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    ListFailuresForLicenseConfigurationOperationsResponse(const ListFailuresForLicenseConfigurationOperationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFailuresForLicenseConfigurationOperationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFailuresForLicenseConfigurationOperationsResponse)
    Q_DISABLE_COPY(ListFailuresForLicenseConfigurationOperationsResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
