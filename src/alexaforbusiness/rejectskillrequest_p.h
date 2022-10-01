// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTSKILLREQUEST_P_H
#define QTAWS_REJECTSKILLREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "rejectskillrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class RejectSkillRequest;

class RejectSkillRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    RejectSkillRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   RejectSkillRequest * const q);
    RejectSkillRequestPrivate(const RejectSkillRequestPrivate &other,
                                   RejectSkillRequest * const q);

private:
    Q_DECLARE_PUBLIC(RejectSkillRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
