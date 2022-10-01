// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECORDSREQUEST_P_H
#define QTAWS_LISTRECORDSREQUEST_P_H

#include "cognitosyncrequest_p.h"
#include "listrecordsrequest.h"

namespace QtAws {
namespace CognitoSync {

class ListRecordsRequest;

class ListRecordsRequestPrivate : public CognitoSyncRequestPrivate {

public:
    ListRecordsRequestPrivate(const CognitoSyncRequest::Action action,
                                   ListRecordsRequest * const q);
    ListRecordsRequestPrivate(const ListRecordsRequestPrivate &other,
                                   ListRecordsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRecordsRequest)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
