// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPOSITIONCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTPOSITIONCONFIGURATIONREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "putpositionconfigurationrequest.h"

namespace QtAws {
namespace IoTWireless {

class PutPositionConfigurationRequest;

class PutPositionConfigurationRequestPrivate : public IoTWirelessRequestPrivate {

public:
    PutPositionConfigurationRequestPrivate(const IoTWirelessRequest::Action action,
                                   PutPositionConfigurationRequest * const q);
    PutPositionConfigurationRequestPrivate(const PutPositionConfigurationRequestPrivate &other,
                                   PutPositionConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutPositionConfigurationRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
