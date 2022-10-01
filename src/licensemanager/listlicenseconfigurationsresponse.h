// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLICENSECONFIGURATIONSRESPONSE_H
#define QTAWS_LISTLICENSECONFIGURATIONSRESPONSE_H

#include "licensemanagerresponse.h"
#include "listlicenseconfigurationsrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListLicenseConfigurationsResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT ListLicenseConfigurationsResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    ListLicenseConfigurationsResponse(const ListLicenseConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLicenseConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLicenseConfigurationsResponse)
    Q_DISABLE_COPY(ListLicenseConfigurationsResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
