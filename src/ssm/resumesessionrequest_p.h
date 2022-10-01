// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMESESSIONREQUEST_P_H
#define QTAWS_RESUMESESSIONREQUEST_P_H

#include "ssmrequest_p.h"
#include "resumesessionrequest.h"

namespace QtAws {
namespace Ssm {

class ResumeSessionRequest;

class ResumeSessionRequestPrivate : public SsmRequestPrivate {

public:
    ResumeSessionRequestPrivate(const SsmRequest::Action action,
                                   ResumeSessionRequest * const q);
    ResumeSessionRequestPrivate(const ResumeSessionRequestPrivate &other,
                                   ResumeSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResumeSessionRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
