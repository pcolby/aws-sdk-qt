// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPUSERIMPORTJOBREQUEST_H
#define QTAWS_STOPUSERIMPORTJOBREQUEST_H

#include "cognitoidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class StopUserImportJobRequestPrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT StopUserImportJobRequest : public CognitoIdentityProviderRequest {

public:
    StopUserImportJobRequest(const StopUserImportJobRequest &other);
    StopUserImportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopUserImportJobRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
