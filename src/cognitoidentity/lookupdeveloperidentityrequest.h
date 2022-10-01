// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOOKUPDEVELOPERIDENTITYREQUEST_H
#define QTAWS_LOOKUPDEVELOPERIDENTITYREQUEST_H

#include "cognitoidentityrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class LookupDeveloperIdentityRequestPrivate;

class QTAWSCOGNITOIDENTITY_EXPORT LookupDeveloperIdentityRequest : public CognitoIdentityRequest {

public:
    LookupDeveloperIdentityRequest(const LookupDeveloperIdentityRequest &other);
    LookupDeveloperIdentityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LookupDeveloperIdentityRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
