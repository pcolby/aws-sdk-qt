// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTRIGGERREQUEST_P_H
#define QTAWS_STOPTRIGGERREQUEST_P_H

#include "gluerequest_p.h"
#include "stoptriggerrequest.h"

namespace QtAws {
namespace Glue {

class StopTriggerRequest;

class StopTriggerRequestPrivate : public GlueRequestPrivate {

public:
    StopTriggerRequestPrivate(const GlueRequest::Action action,
                                   StopTriggerRequest * const q);
    StopTriggerRequestPrivate(const StopTriggerRequestPrivate &other,
                                   StopTriggerRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopTriggerRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
