// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRUMEVENTSREQUEST_P_H
#define QTAWS_PUTRUMEVENTSREQUEST_P_H

#include "rumrequest_p.h"
#include "putrumeventsrequest.h"

namespace QtAws {
namespace Rum {

class PutRumEventsRequest;

class PutRumEventsRequestPrivate : public RumRequestPrivate {

public:
    PutRumEventsRequestPrivate(const RumRequest::Action action,
                                   PutRumEventsRequest * const q);
    PutRumEventsRequestPrivate(const PutRumEventsRequestPrivate &other,
                                   PutRumEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutRumEventsRequest)

};

} // namespace Rum
} // namespace QtAws

#endif
