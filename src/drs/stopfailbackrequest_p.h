// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPFAILBACKREQUEST_P_H
#define QTAWS_STOPFAILBACKREQUEST_P_H

#include "drsrequest_p.h"
#include "stopfailbackrequest.h"

namespace QtAws {
namespace Drs {

class StopFailbackRequest;

class StopFailbackRequestPrivate : public DrsRequestPrivate {

public:
    StopFailbackRequestPrivate(const DrsRequest::Action action,
                                   StopFailbackRequest * const q);
    StopFailbackRequestPrivate(const StopFailbackRequestPrivate &other,
                                   StopFailbackRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopFailbackRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
