// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDELEGATEDSERVICESFORACCOUNTRESPONSE_H
#define QTAWS_LISTDELEGATEDSERVICESFORACCOUNTRESPONSE_H

#include "organizationsresponse.h"
#include "listdelegatedservicesforaccountrequest.h"

namespace QtAws {
namespace Organizations {

class ListDelegatedServicesForAccountResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT ListDelegatedServicesForAccountResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    ListDelegatedServicesForAccountResponse(const ListDelegatedServicesForAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDelegatedServicesForAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDelegatedServicesForAccountResponse)
    Q_DISABLE_COPY(ListDelegatedServicesForAccountResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
