// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCSVHEADERRESPONSE_H
#define QTAWS_GETCSVHEADERRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "getcsvheaderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class GetCSVHeaderResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT GetCSVHeaderResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    GetCSVHeaderResponse(const GetCSVHeaderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCSVHeaderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCSVHeaderResponse)
    Q_DISABLE_COPY(GetCSVHeaderResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
