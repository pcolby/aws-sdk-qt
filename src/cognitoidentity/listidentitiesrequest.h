// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIDENTITIESREQUEST_H
#define QTAWS_LISTIDENTITIESREQUEST_H

#include "cognitoidentityrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class ListIdentitiesRequestPrivate;

class QTAWSCOGNITOIDENTITY_EXPORT ListIdentitiesRequest : public CognitoIdentityRequest {

public:
    ListIdentitiesRequest(const ListIdentitiesRequest &other);
    ListIdentitiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIdentitiesRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
