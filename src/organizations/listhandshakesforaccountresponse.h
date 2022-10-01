// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHANDSHAKESFORACCOUNTRESPONSE_H
#define QTAWS_LISTHANDSHAKESFORACCOUNTRESPONSE_H

#include "organizationsresponse.h"
#include "listhandshakesforaccountrequest.h"

namespace QtAws {
namespace Organizations {

class ListHandshakesForAccountResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT ListHandshakesForAccountResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    ListHandshakesForAccountResponse(const ListHandshakesForAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListHandshakesForAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHandshakesForAccountResponse)
    Q_DISABLE_COPY(ListHandshakesForAccountResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
