// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPUBLISHINGDESTINATIONREQUEST_P_H
#define QTAWS_CREATEPUBLISHINGDESTINATIONREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "createpublishingdestinationrequest.h"

namespace QtAws {
namespace GuardDuty {

class CreatePublishingDestinationRequest;

class CreatePublishingDestinationRequestPrivate : public GuardDutyRequestPrivate {

public:
    CreatePublishingDestinationRequestPrivate(const GuardDutyRequest::Action action,
                                   CreatePublishingDestinationRequest * const q);
    CreatePublishingDestinationRequestPrivate(const CreatePublishingDestinationRequestPrivate &other,
                                   CreatePublishingDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePublishingDestinationRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
