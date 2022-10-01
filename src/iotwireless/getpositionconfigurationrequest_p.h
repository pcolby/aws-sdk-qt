// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPOSITIONCONFIGURATIONREQUEST_P_H
#define QTAWS_GETPOSITIONCONFIGURATIONREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "getpositionconfigurationrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetPositionConfigurationRequest;

class GetPositionConfigurationRequestPrivate : public IoTWirelessRequestPrivate {

public:
    GetPositionConfigurationRequestPrivate(const IoTWirelessRequest::Action action,
                                   GetPositionConfigurationRequest * const q);
    GetPositionConfigurationRequestPrivate(const GetPositionConfigurationRequestPrivate &other,
                                   GetPositionConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPositionConfigurationRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
