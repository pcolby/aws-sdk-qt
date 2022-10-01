// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPUSERIMPORTJOBRESPONSE_P_H
#define QTAWS_STOPUSERIMPORTJOBRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class StopUserImportJobResponse;

class StopUserImportJobResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit StopUserImportJobResponsePrivate(StopUserImportJobResponse * const q);

    void parseStopUserImportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopUserImportJobResponse)
    Q_DISABLE_COPY(StopUserImportJobResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
