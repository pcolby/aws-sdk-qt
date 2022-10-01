// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEDEVELOPERIDENTITIESREQUEST_H
#define QTAWS_MERGEDEVELOPERIDENTITIESREQUEST_H

#include "cognitoidentityrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class MergeDeveloperIdentitiesRequestPrivate;

class QTAWSCOGNITOIDENTITY_EXPORT MergeDeveloperIdentitiesRequest : public CognitoIdentityRequest {

public:
    MergeDeveloperIdentitiesRequest(const MergeDeveloperIdentitiesRequest &other);
    MergeDeveloperIdentitiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MergeDeveloperIdentitiesRequest)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
