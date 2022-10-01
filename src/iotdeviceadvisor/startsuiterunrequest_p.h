// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSUITERUNREQUEST_P_H
#define QTAWS_STARTSUITERUNREQUEST_P_H

#include "iotdeviceadvisorrequest_p.h"
#include "startsuiterunrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class StartSuiteRunRequest;

class StartSuiteRunRequestPrivate : public IotDeviceAdvisorRequestPrivate {

public:
    StartSuiteRunRequestPrivate(const IotDeviceAdvisorRequest::Action action,
                                   StartSuiteRunRequest * const q);
    StartSuiteRunRequestPrivate(const StartSuiteRunRequestPrivate &other,
                                   StartSuiteRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartSuiteRunRequest)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
