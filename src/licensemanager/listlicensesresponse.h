// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLICENSESRESPONSE_H
#define QTAWS_LISTLICENSESRESPONSE_H

#include "licensemanagerresponse.h"
#include "listlicensesrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListLicensesResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT ListLicensesResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    ListLicensesResponse(const ListLicensesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLicensesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLicensesResponse)
    Q_DISABLE_COPY(ListLicensesResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
