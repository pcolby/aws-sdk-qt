// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUBMITATTACHMENTSTATECHANGESREQUEST_P_H
#define QTAWS_SUBMITATTACHMENTSTATECHANGESREQUEST_P_H

#include "ecsrequest_p.h"
#include "submitattachmentstatechangesrequest.h"

namespace QtAws {
namespace Ecs {

class SubmitAttachmentStateChangesRequest;

class SubmitAttachmentStateChangesRequestPrivate : public EcsRequestPrivate {

public:
    SubmitAttachmentStateChangesRequestPrivate(const EcsRequest::Action action,
                                   SubmitAttachmentStateChangesRequest * const q);
    SubmitAttachmentStateChangesRequestPrivate(const SubmitAttachmentStateChangesRequestPrivate &other,
                                   SubmitAttachmentStateChangesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SubmitAttachmentStateChangesRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
