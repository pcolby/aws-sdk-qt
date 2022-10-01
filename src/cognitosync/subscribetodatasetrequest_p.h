// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBSCRIBETODATASETREQUEST_P_H
#define QTAWS_SUBSCRIBETODATASETREQUEST_P_H

#include "cognitosyncrequest_p.h"
#include "subscribetodatasetrequest.h"

namespace QtAws {
namespace CognitoSync {

class SubscribeToDatasetRequest;

class SubscribeToDatasetRequestPrivate : public CognitoSyncRequestPrivate {

public:
    SubscribeToDatasetRequestPrivate(const CognitoSyncRequest::Action action,
                                   SubscribeToDatasetRequest * const q);
    SubscribeToDatasetRequestPrivate(const SubscribeToDatasetRequestPrivate &other,
                                   SubscribeToDatasetRequest * const q);

private:
    Q_DECLARE_PUBLIC(SubscribeToDatasetRequest)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
