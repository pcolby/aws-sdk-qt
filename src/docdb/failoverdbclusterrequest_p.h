// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FAILOVERDBCLUSTERREQUEST_P_H
#define QTAWS_FAILOVERDBCLUSTERREQUEST_P_H

#include "docdbrequest_p.h"
#include "failoverdbclusterrequest.h"

namespace QtAws {
namespace DocDb {

class FailoverDBClusterRequest;

class FailoverDBClusterRequestPrivate : public DocDbRequestPrivate {

public:
    FailoverDBClusterRequestPrivate(const DocDbRequest::Action action,
                                   FailoverDBClusterRequest * const q);
    FailoverDBClusterRequestPrivate(const FailoverDBClusterRequestPrivate &other,
                                   FailoverDBClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(FailoverDBClusterRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
