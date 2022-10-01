// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRYDATAREPLICATIONREQUEST_P_H
#define QTAWS_RETRYDATAREPLICATIONREQUEST_P_H

#include "mgnrequest_p.h"
#include "retrydatareplicationrequest.h"

namespace QtAws {
namespace Mgn {

class RetryDataReplicationRequest;

class RetryDataReplicationRequestPrivate : public MgnRequestPrivate {

public:
    RetryDataReplicationRequestPrivate(const MgnRequest::Action action,
                                   RetryDataReplicationRequest * const q);
    RetryDataReplicationRequestPrivate(const RetryDataReplicationRequestPrivate &other,
                                   RetryDataReplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(RetryDataReplicationRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
