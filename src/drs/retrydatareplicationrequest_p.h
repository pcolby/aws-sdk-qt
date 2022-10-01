// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRYDATAREPLICATIONREQUEST_P_H
#define QTAWS_RETRYDATAREPLICATIONREQUEST_P_H

#include "drsrequest_p.h"
#include "retrydatareplicationrequest.h"

namespace QtAws {
namespace Drs {

class RetryDataReplicationRequest;

class RetryDataReplicationRequestPrivate : public DrsRequestPrivate {

public:
    RetryDataReplicationRequestPrivate(const DrsRequest::Action action,
                                   RetryDataReplicationRequest * const q);
    RetryDataReplicationRequestPrivate(const RetryDataReplicationRequestPrivate &other,
                                   RetryDataReplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(RetryDataReplicationRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
