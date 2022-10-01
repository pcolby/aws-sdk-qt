// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPACTIVITYSTREAMREQUEST_P_H
#define QTAWS_STOPACTIVITYSTREAMREQUEST_P_H

#include "rdsrequest_p.h"
#include "stopactivitystreamrequest.h"

namespace QtAws {
namespace Rds {

class StopActivityStreamRequest;

class StopActivityStreamRequestPrivate : public RdsRequestPrivate {

public:
    StopActivityStreamRequestPrivate(const RdsRequest::Action action,
                                   StopActivityStreamRequest * const q);
    StopActivityStreamRequestPrivate(const StopActivityStreamRequestPrivate &other,
                                   StopActivityStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopActivityStreamRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
