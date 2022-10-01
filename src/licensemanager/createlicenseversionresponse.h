// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELICENSEVERSIONRESPONSE_H
#define QTAWS_CREATELICENSEVERSIONRESPONSE_H

#include "licensemanagerresponse.h"
#include "createlicenseversionrequest.h"

namespace QtAws {
namespace LicenseManager {

class CreateLicenseVersionResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT CreateLicenseVersionResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    CreateLicenseVersionResponse(const CreateLicenseVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLicenseVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLicenseVersionResponse)
    Q_DISABLE_COPY(CreateLicenseVersionResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
