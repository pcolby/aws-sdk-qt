// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEARCHIVEREQUEST_P_H
#define QTAWS_CREATEARCHIVEREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "createarchiverequest.h"

namespace QtAws {
namespace EventBridge {

class CreateArchiveRequest;

class CreateArchiveRequestPrivate : public EventBridgeRequestPrivate {

public:
    CreateArchiveRequestPrivate(const EventBridgeRequest::Action action,
                                   CreateArchiveRequest * const q);
    CreateArchiveRequestPrivate(const CreateArchiveRequestPrivate &other,
                                   CreateArchiveRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateArchiveRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
