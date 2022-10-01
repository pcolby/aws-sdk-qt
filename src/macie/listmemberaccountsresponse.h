// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEMBERACCOUNTSRESPONSE_H
#define QTAWS_LISTMEMBERACCOUNTSRESPONSE_H

#include "macieresponse.h"
#include "listmemberaccountsrequest.h"

namespace QtAws {
namespace Macie {

class ListMemberAccountsResponsePrivate;

class QTAWSMACIE_EXPORT ListMemberAccountsResponse : public MacieResponse {
    Q_OBJECT

public:
    ListMemberAccountsResponse(const ListMemberAccountsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMemberAccountsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMemberAccountsResponse)
    Q_DISABLE_COPY(ListMemberAccountsResponse)

};

} // namespace Macie
} // namespace QtAws

#endif
