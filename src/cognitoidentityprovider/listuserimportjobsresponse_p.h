// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERIMPORTJOBSRESPONSE_P_H
#define QTAWS_LISTUSERIMPORTJOBSRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ListUserImportJobsResponse;

class ListUserImportJobsResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit ListUserImportJobsResponsePrivate(ListUserImportJobsResponse * const q);

    void parseListUserImportJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListUserImportJobsResponse)
    Q_DISABLE_COPY(ListUserImportJobsResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
