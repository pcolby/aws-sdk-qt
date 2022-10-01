// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIDENTITYPOOLSREQUEST_P_H
#define QTAWS_LISTIDENTITYPOOLSREQUEST_P_H

#include "cognitoidentityrequest_p.h"
#include "listidentitypoolsrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class ListIdentityPoolsRequest;

class ListIdentityPoolsRequestPrivate : public CognitoIdentityRequestPrivate {

public:
    ListIdentityPoolsRequestPrivate(const CognitoIdentityRequest::Action action,
                                   ListIdentityPoolsRequest * const q);
    ListIdentityPoolsRequestPrivate(const ListIdentityPoolsRequestPrivate &other,
                                   ListIdentityPoolsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListIdentityPoolsRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
