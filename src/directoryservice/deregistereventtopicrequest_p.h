// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTEREVENTTOPICREQUEST_P_H
#define QTAWS_DEREGISTEREVENTTOPICREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "deregistereventtopicrequest.h"

namespace QtAws {
namespace DirectoryService {

class DeregisterEventTopicRequest;

class DeregisterEventTopicRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    DeregisterEventTopicRequestPrivate(const DirectoryServiceRequest::Action action,
                                   DeregisterEventTopicRequest * const q);
    DeregisterEventTopicRequestPrivate(const DeregisterEventTopicRequestPrivate &other,
                                   DeregisterEventTopicRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterEventTopicRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
