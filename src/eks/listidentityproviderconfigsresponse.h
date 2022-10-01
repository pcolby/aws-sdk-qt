// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIDENTITYPROVIDERCONFIGSRESPONSE_H
#define QTAWS_LISTIDENTITYPROVIDERCONFIGSRESPONSE_H

#include "eksresponse.h"
#include "listidentityproviderconfigsrequest.h"

namespace QtAws {
namespace Eks {

class ListIdentityProviderConfigsResponsePrivate;

class QTAWSEKS_EXPORT ListIdentityProviderConfigsResponse : public EksResponse {
    Q_OBJECT

public:
    ListIdentityProviderConfigsResponse(const ListIdentityProviderConfigsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListIdentityProviderConfigsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIdentityProviderConfigsResponse)
    Q_DISABLE_COPY(ListIdentityProviderConfigsResponse)

};

} // namespace Eks
} // namespace QtAws

#endif
