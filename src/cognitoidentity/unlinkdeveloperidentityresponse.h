// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNLINKDEVELOPERIDENTITYRESPONSE_H
#define QTAWS_UNLINKDEVELOPERIDENTITYRESPONSE_H

#include "cognitoidentityresponse.h"
#include "unlinkdeveloperidentityrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class UnlinkDeveloperIdentityResponsePrivate;

class QTAWSCOGNITOIDENTITY_EXPORT UnlinkDeveloperIdentityResponse : public CognitoIdentityResponse {
    Q_OBJECT

public:
    UnlinkDeveloperIdentityResponse(const UnlinkDeveloperIdentityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UnlinkDeveloperIdentityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UnlinkDeveloperIdentityResponse)
    Q_DISABLE_COPY(UnlinkDeveloperIdentityResponse)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
