// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPUBLISHINGDESTINATIONREQUEST_P_H
#define QTAWS_UPDATEPUBLISHINGDESTINATIONREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "updatepublishingdestinationrequest.h"

namespace QtAws {
namespace GuardDuty {

class UpdatePublishingDestinationRequest;

class UpdatePublishingDestinationRequestPrivate : public GuardDutyRequestPrivate {

public:
    UpdatePublishingDestinationRequestPrivate(const GuardDutyRequest::Action action,
                                   UpdatePublishingDestinationRequest * const q);
    UpdatePublishingDestinationRequestPrivate(const UpdatePublishingDestinationRequestPrivate &other,
                                   UpdatePublishingDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePublishingDestinationRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
