// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUITEDEFINITIONREQUEST_P_H
#define QTAWS_DELETESUITEDEFINITIONREQUEST_P_H

#include "iotdeviceadvisorrequest_p.h"
#include "deletesuitedefinitionrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class DeleteSuiteDefinitionRequest;

class DeleteSuiteDefinitionRequestPrivate : public IotDeviceAdvisorRequestPrivate {

public:
    DeleteSuiteDefinitionRequestPrivate(const IotDeviceAdvisorRequest::Action action,
                                   DeleteSuiteDefinitionRequest * const q);
    DeleteSuiteDefinitionRequestPrivate(const DeleteSuiteDefinitionRequestPrivate &other,
                                   DeleteSuiteDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSuiteDefinitionRequest)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
