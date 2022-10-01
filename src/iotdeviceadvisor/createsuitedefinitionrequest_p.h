// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUITEDEFINITIONREQUEST_P_H
#define QTAWS_CREATESUITEDEFINITIONREQUEST_P_H

#include "iotdeviceadvisorrequest_p.h"
#include "createsuitedefinitionrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class CreateSuiteDefinitionRequest;

class CreateSuiteDefinitionRequestPrivate : public IotDeviceAdvisorRequestPrivate {

public:
    CreateSuiteDefinitionRequestPrivate(const IotDeviceAdvisorRequest::Action action,
                                   CreateSuiteDefinitionRequest * const q);
    CreateSuiteDefinitionRequestPrivate(const CreateSuiteDefinitionRequestPrivate &other,
                                   CreateSuiteDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSuiteDefinitionRequest)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
