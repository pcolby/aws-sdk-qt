// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDRESPONSE_H
#define QTAWS_GETIDRESPONSE_H

#include "cognitoidentityresponse.h"
#include "getidrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class GetIdResponsePrivate;

class QTAWSCOGNITOIDENTITY_EXPORT GetIdResponse : public CognitoIdentityResponse {
    Q_OBJECT

public:
    GetIdResponse(const GetIdRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetIdRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIdResponse)
    Q_DISABLE_COPY(GetIdResponse)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
