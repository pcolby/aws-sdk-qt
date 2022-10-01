// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDCUSTOMATTRIBUTESREQUEST_P_H
#define QTAWS_ADDCUSTOMATTRIBUTESREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "addcustomattributesrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AddCustomAttributesRequest;

class AddCustomAttributesRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    AddCustomAttributesRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   AddCustomAttributesRequest * const q);
    AddCustomAttributesRequestPrivate(const AddCustomAttributesRequestPrivate &other,
                                   AddCustomAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddCustomAttributesRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
