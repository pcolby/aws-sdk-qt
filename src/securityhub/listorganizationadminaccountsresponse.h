// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORGANIZATIONADMINACCOUNTSRESPONSE_H
#define QTAWS_LISTORGANIZATIONADMINACCOUNTSRESPONSE_H

#include "securityhubresponse.h"
#include "listorganizationadminaccountsrequest.h"

namespace QtAws {
namespace SecurityHub {

class ListOrganizationAdminAccountsResponsePrivate;

class QTAWSSECURITYHUB_EXPORT ListOrganizationAdminAccountsResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    ListOrganizationAdminAccountsResponse(const ListOrganizationAdminAccountsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListOrganizationAdminAccountsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOrganizationAdminAccountsResponse)
    Q_DISABLE_COPY(ListOrganizationAdminAccountsResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
