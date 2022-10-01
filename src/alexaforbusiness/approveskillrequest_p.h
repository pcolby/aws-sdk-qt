// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPROVESKILLREQUEST_P_H
#define QTAWS_APPROVESKILLREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "approveskillrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class ApproveSkillRequest;

class ApproveSkillRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    ApproveSkillRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   ApproveSkillRequest * const q);
    ApproveSkillRequestPrivate(const ApproveSkillRequestPrivate &other,
                                   ApproveSkillRequest * const q);

private:
    Q_DECLARE_PUBLIC(ApproveSkillRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
