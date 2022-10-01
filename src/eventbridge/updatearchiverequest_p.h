// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEARCHIVEREQUEST_P_H
#define QTAWS_UPDATEARCHIVEREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "updatearchiverequest.h"

namespace QtAws {
namespace EventBridge {

class UpdateArchiveRequest;

class UpdateArchiveRequestPrivate : public EventBridgeRequestPrivate {

public:
    UpdateArchiveRequestPrivate(const EventBridgeRequest::Action action,
                                   UpdateArchiveRequest * const q);
    UpdateArchiveRequestPrivate(const UpdateArchiveRequestPrivate &other,
                                   UpdateArchiveRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateArchiveRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
