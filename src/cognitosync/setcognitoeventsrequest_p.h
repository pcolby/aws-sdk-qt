// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETCOGNITOEVENTSREQUEST_P_H
#define QTAWS_SETCOGNITOEVENTSREQUEST_P_H

#include "cognitosyncrequest_p.h"
#include "setcognitoeventsrequest.h"

namespace QtAws {
namespace CognitoSync {

class SetCognitoEventsRequest;

class SetCognitoEventsRequestPrivate : public CognitoSyncRequestPrivate {

public:
    SetCognitoEventsRequestPrivate(const CognitoSyncRequest::Action action,
                                   SetCognitoEventsRequest * const q);
    SetCognitoEventsRequestPrivate(const SetCognitoEventsRequestPrivate &other,
                                   SetCognitoEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetCognitoEventsRequest)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
