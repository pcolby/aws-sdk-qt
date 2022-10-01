// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELIVERCONFIGSNAPSHOTREQUEST_P_H
#define QTAWS_DELIVERCONFIGSNAPSHOTREQUEST_P_H

#include "configservicerequest_p.h"
#include "deliverconfigsnapshotrequest.h"

namespace QtAws {
namespace ConfigService {

class DeliverConfigSnapshotRequest;

class DeliverConfigSnapshotRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DeliverConfigSnapshotRequestPrivate(const ConfigServiceRequest::Action action,
                                   DeliverConfigSnapshotRequest * const q);
    DeliverConfigSnapshotRequestPrivate(const DeliverConfigSnapshotRequestPrivate &other,
                                   DeliverConfigSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeliverConfigSnapshotRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
