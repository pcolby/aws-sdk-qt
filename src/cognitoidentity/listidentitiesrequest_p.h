// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIDENTITIESREQUEST_P_H
#define QTAWS_LISTIDENTITIESREQUEST_P_H

#include "cognitoidentityrequest_p.h"
#include "listidentitiesrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class ListIdentitiesRequest;

class ListIdentitiesRequestPrivate : public CognitoIdentityRequestPrivate {

public:
    ListIdentitiesRequestPrivate(const CognitoIdentityRequest::Action action,
                                   ListIdentitiesRequest * const q);
    ListIdentitiesRequestPrivate(const ListIdentitiesRequestPrivate &other,
                                   ListIdentitiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListIdentitiesRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
