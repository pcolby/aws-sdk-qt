// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSUITERUNREQUEST_P_H
#define QTAWS_STOPSUITERUNREQUEST_P_H

#include "iotdeviceadvisorrequest_p.h"
#include "stopsuiterunrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class StopSuiteRunRequest;

class StopSuiteRunRequestPrivate : public IotDeviceAdvisorRequestPrivate {

public:
    StopSuiteRunRequestPrivate(const IotDeviceAdvisorRequest::Action action,
                                   StopSuiteRunRequest * const q);
    StopSuiteRunRequestPrivate(const StopSuiteRunRequestPrivate &other,
                                   StopSuiteRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopSuiteRunRequest)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
