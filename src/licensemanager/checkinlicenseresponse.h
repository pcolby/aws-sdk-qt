// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKINLICENSERESPONSE_H
#define QTAWS_CHECKINLICENSERESPONSE_H

#include "licensemanagerresponse.h"
#include "checkinlicenserequest.h"

namespace QtAws {
namespace LicenseManager {

class CheckInLicenseResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT CheckInLicenseResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    CheckInLicenseResponse(const CheckInLicenseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CheckInLicenseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CheckInLicenseResponse)
    Q_DISABLE_COPY(CheckInLicenseResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
