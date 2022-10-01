// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBULKPUBLISHDETAILSREQUEST_P_H
#define QTAWS_GETBULKPUBLISHDETAILSREQUEST_P_H

#include "cognitosyncrequest_p.h"
#include "getbulkpublishdetailsrequest.h"

namespace QtAws {
namespace CognitoSync {

class GetBulkPublishDetailsRequest;

class GetBulkPublishDetailsRequestPrivate : public CognitoSyncRequestPrivate {

public:
    GetBulkPublishDetailsRequestPrivate(const CognitoSyncRequest::Action action,
                                   GetBulkPublishDetailsRequest * const q);
    GetBulkPublishDetailsRequestPrivate(const GetBulkPublishDetailsRequestPrivate &other,
                                   GetBulkPublishDetailsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBulkPublishDetailsRequest)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
