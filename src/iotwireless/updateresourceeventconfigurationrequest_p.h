// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCEEVENTCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATERESOURCEEVENTCONFIGURATIONREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "updateresourceeventconfigurationrequest.h"

namespace QtAws {
namespace IoTWireless {

class UpdateResourceEventConfigurationRequest;

class UpdateResourceEventConfigurationRequestPrivate : public IoTWirelessRequestPrivate {

public:
    UpdateResourceEventConfigurationRequestPrivate(const IoTWirelessRequest::Action action,
                                   UpdateResourceEventConfigurationRequest * const q);
    UpdateResourceEventConfigurationRequestPrivate(const UpdateResourceEventConfigurationRequestPrivate &other,
                                   UpdateResourceEventConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateResourceEventConfigurationRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
