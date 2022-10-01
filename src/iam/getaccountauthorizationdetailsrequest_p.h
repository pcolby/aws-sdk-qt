// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTAUTHORIZATIONDETAILSREQUEST_P_H
#define QTAWS_GETACCOUNTAUTHORIZATIONDETAILSREQUEST_P_H

#include "iamrequest_p.h"
#include "getaccountauthorizationdetailsrequest.h"

namespace QtAws {
namespace Iam {

class GetAccountAuthorizationDetailsRequest;

class GetAccountAuthorizationDetailsRequestPrivate : public IamRequestPrivate {

public:
    GetAccountAuthorizationDetailsRequestPrivate(const IamRequest::Action action,
                                   GetAccountAuthorizationDetailsRequest * const q);
    GetAccountAuthorizationDetailsRequestPrivate(const GetAccountAuthorizationDetailsRequestPrivate &other,
                                   GetAccountAuthorizationDetailsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAccountAuthorizationDetailsRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
