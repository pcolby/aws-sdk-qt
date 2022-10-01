// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSTACKREQUEST_P_H
#define QTAWS_STARTSTACKREQUEST_P_H

#include "opsworksrequest_p.h"
#include "startstackrequest.h"

namespace QtAws {
namespace OpsWorks {

class StartStackRequest;

class StartStackRequestPrivate : public OpsWorksRequestPrivate {

public:
    StartStackRequestPrivate(const OpsWorksRequest::Action action,
                                   StartStackRequest * const q);
    StartStackRequestPrivate(const StartStackRequestPrivate &other,
                                   StartStackRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartStackRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
