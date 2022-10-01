// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTUSERIMPORTJOBRESPONSE_P_H
#define QTAWS_STARTUSERIMPORTJOBRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class StartUserImportJobResponse;

class StartUserImportJobResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit StartUserImportJobResponsePrivate(StartUserImportJobResponse * const q);

    void parseStartUserImportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartUserImportJobResponse)
    Q_DISABLE_COPY(StartUserImportJobResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
