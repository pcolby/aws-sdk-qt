// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FAILOVERDBCLUSTERREQUEST_P_H
#define QTAWS_FAILOVERDBCLUSTERREQUEST_P_H

#include "neptunerequest_p.h"
#include "failoverdbclusterrequest.h"

namespace QtAws {
namespace Neptune {

class FailoverDBClusterRequest;

class FailoverDBClusterRequestPrivate : public NeptuneRequestPrivate {

public:
    FailoverDBClusterRequestPrivate(const NeptuneRequest::Action action,
                                   FailoverDBClusterRequest * const q);
    FailoverDBClusterRequestPrivate(const FailoverDBClusterRequestPrivate &other,
                                   FailoverDBClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(FailoverDBClusterRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
