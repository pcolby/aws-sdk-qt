// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVENTCONFIGURATIONBYRESOURCETYPESREQUEST_P_H
#define QTAWS_UPDATEEVENTCONFIGURATIONBYRESOURCETYPESREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "updateeventconfigurationbyresourcetypesrequest.h"

namespace QtAws {
namespace IoTWireless {

class UpdateEventConfigurationByResourceTypesRequest;

class UpdateEventConfigurationByResourceTypesRequestPrivate : public IoTWirelessRequestPrivate {

public:
    UpdateEventConfigurationByResourceTypesRequestPrivate(const IoTWirelessRequest::Action action,
                                   UpdateEventConfigurationByResourceTypesRequest * const q);
    UpdateEventConfigurationByResourceTypesRequestPrivate(const UpdateEventConfigurationByResourceTypesRequestPrivate &other,
                                   UpdateEventConfigurationByResourceTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateEventConfigurationByResourceTypesRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
