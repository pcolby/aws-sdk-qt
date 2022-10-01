// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIDENTITYPOOLUSAGERESPONSE_P_H
#define QTAWS_LISTIDENTITYPOOLUSAGERESPONSE_P_H

#include "cognitosyncresponse_p.h"

namespace QtAws {
namespace CognitoSync {

class ListIdentityPoolUsageResponse;

class ListIdentityPoolUsageResponsePrivate : public CognitoSyncResponsePrivate {

public:

    explicit ListIdentityPoolUsageResponsePrivate(ListIdentityPoolUsageResponse * const q);

    void parseListIdentityPoolUsageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListIdentityPoolUsageResponse)
    Q_DISABLE_COPY(ListIdentityPoolUsageResponsePrivate)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
