// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCSVHEADERREQUEST_P_H
#define QTAWS_GETCSVHEADERREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "getcsvheaderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class GetCSVHeaderRequest;

class GetCSVHeaderRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    GetCSVHeaderRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   GetCSVHeaderRequest * const q);
    GetCSVHeaderRequestPrivate(const GetCSVHeaderRequestPrivate &other,
                                   GetCSVHeaderRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCSVHeaderRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
