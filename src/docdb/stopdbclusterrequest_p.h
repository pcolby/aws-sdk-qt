// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDBCLUSTERREQUEST_P_H
#define QTAWS_STOPDBCLUSTERREQUEST_P_H

#include "docdbrequest_p.h"
#include "stopdbclusterrequest.h"

namespace QtAws {
namespace DocDb {

class StopDBClusterRequest;

class StopDBClusterRequestPrivate : public DocDbRequestPrivate {

public:
    StopDBClusterRequestPrivate(const DocDbRequest::Action action,
                                   StopDBClusterRequest * const q);
    StopDBClusterRequestPrivate(const StopDBClusterRequestPrivate &other,
                                   StopDBClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopDBClusterRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
