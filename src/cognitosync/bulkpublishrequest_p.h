// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BULKPUBLISHREQUEST_P_H
#define QTAWS_BULKPUBLISHREQUEST_P_H

#include "cognitosyncrequest_p.h"
#include "bulkpublishrequest.h"

namespace QtAws {
namespace CognitoSync {

class BulkPublishRequest;

class BulkPublishRequestPrivate : public CognitoSyncRequestPrivate {

public:
    BulkPublishRequestPrivate(const CognitoSyncRequest::Action action,
                                   BulkPublishRequest * const q);
    BulkPublishRequestPrivate(const BulkPublishRequestPrivate &other,
                                   BulkPublishRequest * const q);

private:
    Q_DECLARE_PUBLIC(BulkPublishRequest)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
