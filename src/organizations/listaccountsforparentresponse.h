// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTSFORPARENTRESPONSE_H
#define QTAWS_LISTACCOUNTSFORPARENTRESPONSE_H

#include "organizationsresponse.h"
#include "listaccountsforparentrequest.h"

namespace QtAws {
namespace Organizations {

class ListAccountsForParentResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT ListAccountsForParentResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    ListAccountsForParentResponse(const ListAccountsForParentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAccountsForParentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccountsForParentResponse)
    Q_DISABLE_COPY(ListAccountsForParentResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
