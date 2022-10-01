// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFINDINGSFEEDBACKREQUEST_P_H
#define QTAWS_UPDATEFINDINGSFEEDBACKREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "updatefindingsfeedbackrequest.h"

namespace QtAws {
namespace GuardDuty {

class UpdateFindingsFeedbackRequest;

class UpdateFindingsFeedbackRequestPrivate : public GuardDutyRequestPrivate {

public:
    UpdateFindingsFeedbackRequestPrivate(const GuardDutyRequest::Action action,
                                   UpdateFindingsFeedbackRequest * const q);
    UpdateFindingsFeedbackRequestPrivate(const UpdateFindingsFeedbackRequestPrivate &other,
                                   UpdateFindingsFeedbackRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFindingsFeedbackRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
