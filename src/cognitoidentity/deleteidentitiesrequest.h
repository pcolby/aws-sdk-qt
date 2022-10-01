// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIDENTITIESREQUEST_H
#define QTAWS_DELETEIDENTITIESREQUEST_H

#include "cognitoidentityrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class DeleteIdentitiesRequestPrivate;

class QTAWSCOGNITOIDENTITY_EXPORT DeleteIdentitiesRequest : public CognitoIdentityRequest {

public:
    DeleteIdentitiesRequest(const DeleteIdentitiesRequest &other);
    DeleteIdentitiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIdentitiesRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
