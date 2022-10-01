// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSESSIONREQUEST_P_H
#define QTAWS_STARTSESSIONREQUEST_P_H

#include "ssmrequest_p.h"
#include "startsessionrequest.h"

namespace QtAws {
namespace Ssm {

class StartSessionRequest;

class StartSessionRequestPrivate : public SsmRequestPrivate {

public:
    StartSessionRequestPrivate(const SsmRequest::Action action,
                                   StartSessionRequest * const q);
    StartSessionRequestPrivate(const StartSessionRequestPrivate &other,
                                   StartSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartSessionRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
