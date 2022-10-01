// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLICENSEUSAGERESPONSE_H
#define QTAWS_GETLICENSEUSAGERESPONSE_H

#include "licensemanagerresponse.h"
#include "getlicenseusagerequest.h"

namespace QtAws {
namespace LicenseManager {

class GetLicenseUsageResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT GetLicenseUsageResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    GetLicenseUsageResponse(const GetLicenseUsageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLicenseUsageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLicenseUsageResponse)
    Q_DISABLE_COPY(GetLicenseUsageResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
