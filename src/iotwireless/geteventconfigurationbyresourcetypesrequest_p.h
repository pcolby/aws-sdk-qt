// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTCONFIGURATIONBYRESOURCETYPESREQUEST_P_H
#define QTAWS_GETEVENTCONFIGURATIONBYRESOURCETYPESREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "geteventconfigurationbyresourcetypesrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetEventConfigurationByResourceTypesRequest;

class GetEventConfigurationByResourceTypesRequestPrivate : public IoTWirelessRequestPrivate {

public:
    GetEventConfigurationByResourceTypesRequestPrivate(const IoTWirelessRequest::Action action,
                                   GetEventConfigurationByResourceTypesRequest * const q);
    GetEventConfigurationByResourceTypesRequestPrivate(const GetEventConfigurationByResourceTypesRequestPrivate &other,
                                   GetEventConfigurationByResourceTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEventConfigurationByResourceTypesRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
