// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDCUSTOMATTRIBUTESRESPONSE_P_H
#define QTAWS_ADDCUSTOMATTRIBUTESRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AddCustomAttributesResponse;

class AddCustomAttributesResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit AddCustomAttributesResponsePrivate(AddCustomAttributesResponse * const q);

    void parseAddCustomAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddCustomAttributesResponse)
    Q_DISABLE_COPY(AddCustomAttributesResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
