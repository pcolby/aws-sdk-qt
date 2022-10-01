// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDBCLUSTERREQUEST_P_H
#define QTAWS_STARTDBCLUSTERREQUEST_P_H

#include "neptunerequest_p.h"
#include "startdbclusterrequest.h"

namespace QtAws {
namespace Neptune {

class StartDBClusterRequest;

class StartDBClusterRequestPrivate : public NeptuneRequestPrivate {

public:
    StartDBClusterRequestPrivate(const NeptuneRequest::Action action,
                                   StartDBClusterRequest * const q);
    StartDBClusterRequestPrivate(const StartDBClusterRequestPrivate &other,
                                   StartDBClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartDBClusterRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
