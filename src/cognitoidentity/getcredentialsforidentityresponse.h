// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCREDENTIALSFORIDENTITYRESPONSE_H
#define QTAWS_GETCREDENTIALSFORIDENTITYRESPONSE_H

#include "cognitoidentityresponse.h"
#include "getcredentialsforidentityrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class GetCredentialsForIdentityResponsePrivate;

class QTAWSCOGNITOIDENTITY_EXPORT GetCredentialsForIdentityResponse : public CognitoIdentityResponse {
    Q_OBJECT

public:
    GetCredentialsForIdentityResponse(const GetCredentialsForIdentityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCredentialsForIdentityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCredentialsForIdentityResponse)
    Q_DISABLE_COPY(GetCredentialsForIdentityResponse)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
