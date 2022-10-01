// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUITERUNREQUEST_P_H
#define QTAWS_GETSUITERUNREQUEST_P_H

#include "iotdeviceadvisorrequest_p.h"
#include "getsuiterunrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class GetSuiteRunRequest;

class GetSuiteRunRequestPrivate : public IotDeviceAdvisorRequestPrivate {

public:
    GetSuiteRunRequestPrivate(const IotDeviceAdvisorRequest::Action action,
                                   GetSuiteRunRequest * const q);
    GetSuiteRunRequestPrivate(const GetSuiteRunRequestPrivate &other,
                                   GetSuiteRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSuiteRunRequest)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
