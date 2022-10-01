// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FAILOVERGLOBALCLUSTERREQUEST_P_H
#define QTAWS_FAILOVERGLOBALCLUSTERREQUEST_P_H

#include "neptunerequest_p.h"
#include "failoverglobalclusterrequest.h"

namespace QtAws {
namespace Neptune {

class FailoverGlobalClusterRequest;

class FailoverGlobalClusterRequestPrivate : public NeptuneRequestPrivate {

public:
    FailoverGlobalClusterRequestPrivate(const NeptuneRequest::Action action,
                                   FailoverGlobalClusterRequest * const q);
    FailoverGlobalClusterRequestPrivate(const FailoverGlobalClusterRequestPrivate &other,
                                   FailoverGlobalClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(FailoverGlobalClusterRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
