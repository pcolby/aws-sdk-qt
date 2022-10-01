// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETCOGNITOEVENTSRESPONSE_P_H
#define QTAWS_SETCOGNITOEVENTSRESPONSE_P_H

#include "cognitosyncresponse_p.h"

namespace QtAws {
namespace CognitoSync {

class SetCognitoEventsResponse;

class SetCognitoEventsResponsePrivate : public CognitoSyncResponsePrivate {

public:

    explicit SetCognitoEventsResponsePrivate(SetCognitoEventsResponse * const q);

    void parseSetCognitoEventsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetCognitoEventsResponse)
    Q_DISABLE_COPY(SetCognitoEventsResponsePrivate)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
