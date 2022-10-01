// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORGANIZATIONADMINACCOUNTSRESPONSE_H
#define QTAWS_LISTORGANIZATIONADMINACCOUNTSRESPONSE_H

#include "guarddutyresponse.h"
#include "listorganizationadminaccountsrequest.h"

namespace QtAws {
namespace GuardDuty {

class ListOrganizationAdminAccountsResponsePrivate;

class QTAWSGUARDDUTY_EXPORT ListOrganizationAdminAccountsResponse : public GuardDutyResponse {
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

} // namespace GuardDuty
} // namespace QtAws

#endif
