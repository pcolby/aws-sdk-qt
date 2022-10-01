// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPUBLISHINGDESTINATIONREQUEST_P_H
#define QTAWS_DELETEPUBLISHINGDESTINATIONREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "deletepublishingdestinationrequest.h"

namespace QtAws {
namespace GuardDuty {

class DeletePublishingDestinationRequest;

class DeletePublishingDestinationRequestPrivate : public GuardDutyRequestPrivate {

public:
    DeletePublishingDestinationRequestPrivate(const GuardDutyRequest::Action action,
                                   DeletePublishingDestinationRequest * const q);
    DeletePublishingDestinationRequestPrivate(const DeletePublishingDestinationRequestPrivate &other,
                                   DeletePublishingDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePublishingDestinationRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
