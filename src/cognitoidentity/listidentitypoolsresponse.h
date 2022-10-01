// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIDENTITYPOOLSRESPONSE_H
#define QTAWS_LISTIDENTITYPOOLSRESPONSE_H

#include "cognitoidentityresponse.h"
#include "listidentitypoolsrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class ListIdentityPoolsResponsePrivate;

class QTAWSCOGNITOIDENTITY_EXPORT ListIdentityPoolsResponse : public CognitoIdentityResponse {
    Q_OBJECT

public:
    ListIdentityPoolsResponse(const ListIdentityPoolsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListIdentityPoolsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIdentityPoolsResponse)
    Q_DISABLE_COPY(ListIdentityPoolsResponse)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
