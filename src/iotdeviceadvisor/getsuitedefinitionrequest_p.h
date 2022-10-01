// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUITEDEFINITIONREQUEST_P_H
#define QTAWS_GETSUITEDEFINITIONREQUEST_P_H

#include "iotdeviceadvisorrequest_p.h"
#include "getsuitedefinitionrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class GetSuiteDefinitionRequest;

class GetSuiteDefinitionRequestPrivate : public IotDeviceAdvisorRequestPrivate {

public:
    GetSuiteDefinitionRequestPrivate(const IotDeviceAdvisorRequest::Action action,
                                   GetSuiteDefinitionRequest * const q);
    GetSuiteDefinitionRequestPrivate(const GetSuiteDefinitionRequestPrivate &other,
                                   GetSuiteDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSuiteDefinitionRequest)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
