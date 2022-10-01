// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELICENSERESPONSE_H
#define QTAWS_DELETELICENSERESPONSE_H

#include "licensemanagerresponse.h"
#include "deletelicenserequest.h"

namespace QtAws {
namespace LicenseManager {

class DeleteLicenseResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT DeleteLicenseResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    DeleteLicenseResponse(const DeleteLicenseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLicenseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLicenseResponse)
    Q_DISABLE_COPY(DeleteLicenseResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
