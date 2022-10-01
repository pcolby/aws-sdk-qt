// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELICENSERESPONSE_H
#define QTAWS_CREATELICENSERESPONSE_H

#include "licensemanagerresponse.h"
#include "createlicenserequest.h"

namespace QtAws {
namespace LicenseManager {

class CreateLicenseResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT CreateLicenseResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    CreateLicenseResponse(const CreateLicenseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLicenseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLicenseResponse)
    Q_DISABLE_COPY(CreateLicenseResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
