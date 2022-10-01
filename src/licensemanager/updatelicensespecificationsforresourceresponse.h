// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELICENSESPECIFICATIONSFORRESOURCERESPONSE_H
#define QTAWS_UPDATELICENSESPECIFICATIONSFORRESOURCERESPONSE_H

#include "licensemanagerresponse.h"
#include "updatelicensespecificationsforresourcerequest.h"

namespace QtAws {
namespace LicenseManager {

class UpdateLicenseSpecificationsForResourceResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT UpdateLicenseSpecificationsForResourceResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    UpdateLicenseSpecificationsForResourceResponse(const UpdateLicenseSpecificationsForResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateLicenseSpecificationsForResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLicenseSpecificationsForResourceResponse)
    Q_DISABLE_COPY(UpdateLicenseSpecificationsForResourceResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
