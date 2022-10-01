// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEARCHIVEREQUEST_P_H
#define QTAWS_DELETEARCHIVEREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "deletearchiverequest.h"

namespace QtAws {
namespace EventBridge {

class DeleteArchiveRequest;

class DeleteArchiveRequestPrivate : public EventBridgeRequestPrivate {

public:
    DeleteArchiveRequestPrivate(const EventBridgeRequest::Action action,
                                   DeleteArchiveRequest * const q);
    DeleteArchiveRequestPrivate(const DeleteArchiveRequestPrivate &other,
                                   DeleteArchiveRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteArchiveRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
