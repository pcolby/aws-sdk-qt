// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIDENTITYPOOLSREQUEST_H
#define QTAWS_LISTIDENTITYPOOLSREQUEST_H

#include "cognitoidentityrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class ListIdentityPoolsRequestPrivate;

class QTAWSCOGNITOIDENTITY_EXPORT ListIdentityPoolsRequest : public CognitoIdentityRequest {

public:
    ListIdentityPoolsRequest(const ListIdentityPoolsRequest &other);
    ListIdentityPoolsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIdentityPoolsRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
