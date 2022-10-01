// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONTINUOUSEXPORTREQUEST_P_H
#define QTAWS_STARTCONTINUOUSEXPORTREQUEST_P_H

#include "applicationdiscoveryrequest_p.h"
#include "startcontinuousexportrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class StartContinuousExportRequest;

class StartContinuousExportRequestPrivate : public ApplicationDiscoveryRequestPrivate {

public:
    StartContinuousExportRequestPrivate(const ApplicationDiscoveryRequest::Action action,
                                   StartContinuousExportRequest * const q);
    StartContinuousExportRequestPrivate(const StartContinuousExportRequestPrivate &other,
                                   StartContinuousExportRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartContinuousExportRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
