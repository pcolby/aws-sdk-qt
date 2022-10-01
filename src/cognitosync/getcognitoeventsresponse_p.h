// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOGNITOEVENTSRESPONSE_P_H
#define QTAWS_GETCOGNITOEVENTSRESPONSE_P_H

#include "cognitosyncresponse_p.h"

namespace QtAws {
namespace CognitoSync {

class GetCognitoEventsResponse;

class GetCognitoEventsResponsePrivate : public CognitoSyncResponsePrivate {

public:

    explicit GetCognitoEventsResponsePrivate(GetCognitoEventsResponse * const q);

    void parseGetCognitoEventsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCognitoEventsResponse)
    Q_DISABLE_COPY(GetCognitoEventsResponsePrivate)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
