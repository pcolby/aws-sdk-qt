// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDREQUEST_H
#define QTAWS_GETIDREQUEST_H

#include "cognitoidentityrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class GetIdRequestPrivate;

class QTAWSCOGNITOIDENTITY_EXPORT GetIdRequest : public CognitoIdentityRequest {

public:
    GetIdRequest(const GetIdRequest &other);
    GetIdRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIdRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
