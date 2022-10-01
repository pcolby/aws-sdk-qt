// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCESERVERRESPONSE_P_H
#define QTAWS_DELETERESOURCESERVERRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DeleteResourceServerResponse;

class DeleteResourceServerResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit DeleteResourceServerResponsePrivate(DeleteResourceServerResponse * const q);

    void parseDeleteResourceServerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteResourceServerResponse)
    Q_DISABLE_COPY(DeleteResourceServerResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
