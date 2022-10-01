// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTROLESRESPONSE_H
#define QTAWS_LISTACCOUNTROLESRESPONSE_H

#include "ssoresponse.h"
#include "listaccountrolesrequest.h"

namespace QtAws {
namespace Sso {

class ListAccountRolesResponsePrivate;

class QTAWSSSO_EXPORT ListAccountRolesResponse : public SsoResponse {
    Q_OBJECT

public:
    ListAccountRolesResponse(const ListAccountRolesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAccountRolesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccountRolesResponse)
    Q_DISABLE_COPY(ListAccountRolesResponse)

};

} // namespace Sso
} // namespace QtAws

#endif
