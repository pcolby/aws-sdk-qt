// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLICENSESPECIFICATIONSFORRESOURCERESPONSE_H
#define QTAWS_LISTLICENSESPECIFICATIONSFORRESOURCERESPONSE_H

#include "licensemanagerresponse.h"
#include "listlicensespecificationsforresourcerequest.h"

namespace QtAws {
namespace LicenseManager {

class ListLicenseSpecificationsForResourceResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT ListLicenseSpecificationsForResourceResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    ListLicenseSpecificationsForResourceResponse(const ListLicenseSpecificationsForResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLicenseSpecificationsForResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLicenseSpecificationsForResourceResponse)
    Q_DISABLE_COPY(ListLicenseSpecificationsForResourceResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
