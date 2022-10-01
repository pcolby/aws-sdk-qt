// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUITERUNSREQUEST_P_H
#define QTAWS_LISTSUITERUNSREQUEST_P_H

#include "iotdeviceadvisorrequest_p.h"
#include "listsuiterunsrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class ListSuiteRunsRequest;

class ListSuiteRunsRequestPrivate : public IotDeviceAdvisorRequestPrivate {

public:
    ListSuiteRunsRequestPrivate(const IotDeviceAdvisorRequest::Action action,
                                   ListSuiteRunsRequest * const q);
    ListSuiteRunsRequestPrivate(const ListSuiteRunsRequestPrivate &other,
                                   ListSuiteRunsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSuiteRunsRequest)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
