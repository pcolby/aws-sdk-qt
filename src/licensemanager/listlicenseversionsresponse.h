// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLICENSEVERSIONSRESPONSE_H
#define QTAWS_LISTLICENSEVERSIONSRESPONSE_H

#include "licensemanagerresponse.h"
#include "listlicenseversionsrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListLicenseVersionsResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT ListLicenseVersionsResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    ListLicenseVersionsResponse(const ListLicenseVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLicenseVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLicenseVersionsResponse)
    Q_DISABLE_COPY(ListLicenseVersionsResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
