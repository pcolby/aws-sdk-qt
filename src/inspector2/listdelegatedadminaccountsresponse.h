// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDELEGATEDADMINACCOUNTSRESPONSE_H
#define QTAWS_LISTDELEGATEDADMINACCOUNTSRESPONSE_H

#include "inspector2response.h"
#include "listdelegatedadminaccountsrequest.h"

namespace QtAws {
namespace Inspector2 {

class ListDelegatedAdminAccountsResponsePrivate;

class QTAWSINSPECTOR2_EXPORT ListDelegatedAdminAccountsResponse : public Inspector2Response {
    Q_OBJECT

public:
    ListDelegatedAdminAccountsResponse(const ListDelegatedAdminAccountsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDelegatedAdminAccountsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDelegatedAdminAccountsResponse)
    Q_DISABLE_COPY(ListDelegatedAdminAccountsResponse)

};

} // namespace Inspector2
} // namespace QtAws

#endif
