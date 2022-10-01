// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECEIVEDLICENSESRESPONSE_H
#define QTAWS_LISTRECEIVEDLICENSESRESPONSE_H

#include "licensemanagerresponse.h"
#include "listreceivedlicensesrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListReceivedLicensesResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT ListReceivedLicensesResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    ListReceivedLicensesResponse(const ListReceivedLicensesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListReceivedLicensesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReceivedLicensesResponse)
    Q_DISABLE_COPY(ListReceivedLicensesResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
