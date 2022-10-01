// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNSUBSCRIBEFROMDATASETREQUEST_P_H
#define QTAWS_UNSUBSCRIBEFROMDATASETREQUEST_P_H

#include "cognitosyncrequest_p.h"
#include "unsubscribefromdatasetrequest.h"

namespace QtAws {
namespace CognitoSync {

class UnsubscribeFromDatasetRequest;

class UnsubscribeFromDatasetRequestPrivate : public CognitoSyncRequestPrivate {

public:
    UnsubscribeFromDatasetRequestPrivate(const CognitoSyncRequest::Action action,
                                   UnsubscribeFromDatasetRequest * const q);
    UnsubscribeFromDatasetRequestPrivate(const UnsubscribeFromDatasetRequestPrivate &other,
                                   UnsubscribeFromDatasetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UnsubscribeFromDatasetRequest)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
