// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESUITEDEFINITIONREQUEST_P_H
#define QTAWS_UPDATESUITEDEFINITIONREQUEST_P_H

#include "iotdeviceadvisorrequest_p.h"
#include "updatesuitedefinitionrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class UpdateSuiteDefinitionRequest;

class UpdateSuiteDefinitionRequestPrivate : public IotDeviceAdvisorRequestPrivate {

public:
    UpdateSuiteDefinitionRequestPrivate(const IotDeviceAdvisorRequest::Action action,
                                   UpdateSuiteDefinitionRequest * const q);
    UpdateSuiteDefinitionRequestPrivate(const UpdateSuiteDefinitionRequestPrivate &other,
                                   UpdateSuiteDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSuiteDefinitionRequest)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
