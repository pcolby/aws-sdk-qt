// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUITEDEFINITIONSREQUEST_P_H
#define QTAWS_LISTSUITEDEFINITIONSREQUEST_P_H

#include "iotdeviceadvisorrequest_p.h"
#include "listsuitedefinitionsrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class ListSuiteDefinitionsRequest;

class ListSuiteDefinitionsRequestPrivate : public IotDeviceAdvisorRequestPrivate {

public:
    ListSuiteDefinitionsRequestPrivate(const IotDeviceAdvisorRequest::Action action,
                                   ListSuiteDefinitionsRequest * const q);
    ListSuiteDefinitionsRequestPrivate(const ListSuiteDefinitionsRequestPrivate &other,
                                   ListSuiteDefinitionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSuiteDefinitionsRequest)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
