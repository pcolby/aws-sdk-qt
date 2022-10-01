// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERIMPORTJOBRESPONSE_P_H
#define QTAWS_CREATEUSERIMPORTJOBRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class CreateUserImportJobResponse;

class CreateUserImportJobResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit CreateUserImportJobResponsePrivate(CreateUserImportJobResponse * const q);

    void parseCreateUserImportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateUserImportJobResponse)
    Q_DISABLE_COPY(CreateUserImportJobResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
