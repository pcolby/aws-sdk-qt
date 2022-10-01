// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDBCLUSTERREQUEST_P_H
#define QTAWS_STOPDBCLUSTERREQUEST_P_H

#include "neptunerequest_p.h"
#include "stopdbclusterrequest.h"

namespace QtAws {
namespace Neptune {

class StopDBClusterRequest;

class StopDBClusterRequestPrivate : public NeptuneRequestPrivate {

public:
    StopDBClusterRequestPrivate(const NeptuneRequest::Action action,
                                   StopDBClusterRequest * const q);
    StopDBClusterRequestPrivate(const StopDBClusterRequestPrivate &other,
                                   StopDBClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopDBClusterRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
