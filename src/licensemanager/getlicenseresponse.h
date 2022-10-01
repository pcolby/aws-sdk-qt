// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLICENSERESPONSE_H
#define QTAWS_GETLICENSERESPONSE_H

#include "licensemanagerresponse.h"
#include "getlicenserequest.h"

namespace QtAws {
namespace LicenseManager {

class GetLicenseResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT GetLicenseResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    GetLicenseResponse(const GetLicenseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLicenseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLicenseResponse)
    Q_DISABLE_COPY(GetLicenseResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
