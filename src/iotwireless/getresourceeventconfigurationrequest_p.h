// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEEVENTCONFIGURATIONREQUEST_P_H
#define QTAWS_GETRESOURCEEVENTCONFIGURATIONREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "getresourceeventconfigurationrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetResourceEventConfigurationRequest;

class GetResourceEventConfigurationRequestPrivate : public IoTWirelessRequestPrivate {

public:
    GetResourceEventConfigurationRequestPrivate(const IoTWirelessRequest::Action action,
                                   GetResourceEventConfigurationRequest * const q);
    GetResourceEventConfigurationRequestPrivate(const GetResourceEventConfigurationRequestPrivate &other,
                                   GetResourceEventConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResourceEventConfigurationRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
