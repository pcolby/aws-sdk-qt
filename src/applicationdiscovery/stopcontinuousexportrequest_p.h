// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCONTINUOUSEXPORTREQUEST_P_H
#define QTAWS_STOPCONTINUOUSEXPORTREQUEST_P_H

#include "applicationdiscoveryrequest_p.h"
#include "stopcontinuousexportrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class StopContinuousExportRequest;

class StopContinuousExportRequestPrivate : public ApplicationDiscoveryRequestPrivate {

public:
    StopContinuousExportRequestPrivate(const ApplicationDiscoveryRequest::Action action,
                                   StopContinuousExportRequest * const q);
    StopContinuousExportRequestPrivate(const StopContinuousExportRequestPrivate &other,
                                   StopContinuousExportRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopContinuousExportRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
