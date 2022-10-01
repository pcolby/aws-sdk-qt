// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATETARGETINSTANCESREQUEST_P_H
#define QTAWS_TERMINATETARGETINSTANCESREQUEST_P_H

#include "mgnrequest_p.h"
#include "terminatetargetinstancesrequest.h"

namespace QtAws {
namespace Mgn {

class TerminateTargetInstancesRequest;

class TerminateTargetInstancesRequestPrivate : public MgnRequestPrivate {

public:
    TerminateTargetInstancesRequestPrivate(const MgnRequest::Action action,
                                   TerminateTargetInstancesRequest * const q);
    TerminateTargetInstancesRequestPrivate(const TerminateTargetInstancesRequestPrivate &other,
                                   TerminateTargetInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(TerminateTargetInstancesRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
