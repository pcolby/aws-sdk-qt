// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTRIGGERREQUEST_P_H
#define QTAWS_STARTTRIGGERREQUEST_P_H

#include "gluerequest_p.h"
#include "starttriggerrequest.h"

namespace QtAws {
namespace Glue {

class StartTriggerRequest;

class StartTriggerRequestPrivate : public GlueRequestPrivate {

public:
    StartTriggerRequestPrivate(const GlueRequest::Action action,
                                   StartTriggerRequest * const q);
    StartTriggerRequestPrivate(const StartTriggerRequestPrivate &other,
                                   StartTriggerRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartTriggerRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
