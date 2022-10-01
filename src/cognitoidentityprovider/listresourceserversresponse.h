// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESERVERSRESPONSE_H
#define QTAWS_LISTRESOURCESERVERSRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "listresourceserversrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ListResourceServersResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT ListResourceServersResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    ListResourceServersResponse(const ListResourceServersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResourceServersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourceServersResponse)
    Q_DISABLE_COPY(ListResourceServersResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
