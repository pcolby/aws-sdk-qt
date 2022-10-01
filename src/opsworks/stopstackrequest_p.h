// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSTACKREQUEST_P_H
#define QTAWS_STOPSTACKREQUEST_P_H

#include "opsworksrequest_p.h"
#include "stopstackrequest.h"

namespace QtAws {
namespace OpsWorks {

class StopStackRequest;

class StopStackRequestPrivate : public OpsWorksRequestPrivate {

public:
    StopStackRequestPrivate(const OpsWorksRequest::Action action,
                                   StopStackRequest * const q);
    StopStackRequestPrivate(const StopStackRequestPrivate &other,
                                   StopStackRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopStackRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
