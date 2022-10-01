// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTACTIVITYSTREAMREQUEST_P_H
#define QTAWS_STARTACTIVITYSTREAMREQUEST_P_H

#include "rdsrequest_p.h"
#include "startactivitystreamrequest.h"

namespace QtAws {
namespace Rds {

class StartActivityStreamRequest;

class StartActivityStreamRequestPrivate : public RdsRequestPrivate {

public:
    StartActivityStreamRequestPrivate(const RdsRequest::Action action,
                                   StartActivityStreamRequest * const q);
    StartActivityStreamRequestPrivate(const StartActivityStreamRequestPrivate &other,
                                   StartActivityStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartActivityStreamRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
