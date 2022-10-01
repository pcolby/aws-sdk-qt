// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEDEVELOPERIDENTITIESRESPONSE_P_H
#define QTAWS_MERGEDEVELOPERIDENTITIESRESPONSE_P_H

#include "cognitoidentityresponse_p.h"

namespace QtAws {
namespace CognitoIdentity {

class MergeDeveloperIdentitiesResponse;

class MergeDeveloperIdentitiesResponsePrivate : public CognitoIdentityResponsePrivate {

public:

    explicit MergeDeveloperIdentitiesResponsePrivate(MergeDeveloperIdentitiesResponse * const q);

    void parseMergeDeveloperIdentitiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MergeDeveloperIdentitiesResponse)
    Q_DISABLE_COPY(MergeDeveloperIdentitiesResponsePrivate)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
