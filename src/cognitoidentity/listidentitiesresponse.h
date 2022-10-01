// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIDENTITIESRESPONSE_H
#define QTAWS_LISTIDENTITIESRESPONSE_H

#include "cognitoidentityresponse.h"
#include "listidentitiesrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class ListIdentitiesResponsePrivate;

class QTAWSCOGNITOIDENTITY_EXPORT ListIdentitiesResponse : public CognitoIdentityResponse {
    Q_OBJECT

public:
    ListIdentitiesResponse(const ListIdentitiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListIdentitiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIdentitiesResponse)
    Q_DISABLE_COPY(ListIdentitiesResponse)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
