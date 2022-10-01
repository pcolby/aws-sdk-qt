// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATESESSIONREQUEST_P_H
#define QTAWS_TERMINATESESSIONREQUEST_P_H

#include "ssmrequest_p.h"
#include "terminatesessionrequest.h"

namespace QtAws {
namespace Ssm {

class TerminateSessionRequest;

class TerminateSessionRequestPrivate : public SsmRequestPrivate {

public:
    TerminateSessionRequestPrivate(const SsmRequest::Action action,
                                   TerminateSessionRequest * const q);
    TerminateSessionRequestPrivate(const TerminateSessionRequestPrivate &other,
                                   TerminateSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(TerminateSessionRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
