// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOGNITOEVENTSREQUEST_P_H
#define QTAWS_GETCOGNITOEVENTSREQUEST_P_H

#include "cognitosyncrequest_p.h"
#include "getcognitoeventsrequest.h"

namespace QtAws {
namespace CognitoSync {

class GetCognitoEventsRequest;

class GetCognitoEventsRequestPrivate : public CognitoSyncRequestPrivate {

public:
    GetCognitoEventsRequestPrivate(const CognitoSyncRequest::Action action,
                                   GetCognitoEventsRequest * const q);
    GetCognitoEventsRequestPrivate(const GetCognitoEventsRequestPrivate &other,
                                   GetCognitoEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCognitoEventsRequest)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
