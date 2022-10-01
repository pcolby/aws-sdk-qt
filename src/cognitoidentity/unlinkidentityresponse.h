// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNLINKIDENTITYRESPONSE_H
#define QTAWS_UNLINKIDENTITYRESPONSE_H

#include "cognitoidentityresponse.h"
#include "unlinkidentityrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class UnlinkIdentityResponsePrivate;

class QTAWSCOGNITOIDENTITY_EXPORT UnlinkIdentityResponse : public CognitoIdentityResponse {
    Q_OBJECT

public:
    UnlinkIdentityResponse(const UnlinkIdentityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UnlinkIdentityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UnlinkIdentityResponse)
    Q_DISABLE_COPY(UnlinkIdentityResponse)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
