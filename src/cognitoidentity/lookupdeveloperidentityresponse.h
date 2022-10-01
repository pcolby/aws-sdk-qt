// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOOKUPDEVELOPERIDENTITYRESPONSE_H
#define QTAWS_LOOKUPDEVELOPERIDENTITYRESPONSE_H

#include "cognitoidentityresponse.h"
#include "lookupdeveloperidentityrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class LookupDeveloperIdentityResponsePrivate;

class QTAWSCOGNITOIDENTITY_EXPORT LookupDeveloperIdentityResponse : public CognitoIdentityResponse {
    Q_OBJECT

public:
    LookupDeveloperIdentityResponse(const LookupDeveloperIdentityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const LookupDeveloperIdentityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LookupDeveloperIdentityResponse)
    Q_DISABLE_COPY(LookupDeveloperIdentityResponse)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
