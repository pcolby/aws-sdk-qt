// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETALLRESOURCELOGLEVELSREQUEST_P_H
#define QTAWS_RESETALLRESOURCELOGLEVELSREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "resetallresourceloglevelsrequest.h"

namespace QtAws {
namespace IoTWireless {

class ResetAllResourceLogLevelsRequest;

class ResetAllResourceLogLevelsRequestPrivate : public IoTWirelessRequestPrivate {

public:
    ResetAllResourceLogLevelsRequestPrivate(const IoTWirelessRequest::Action action,
                                   ResetAllResourceLogLevelsRequest * const q);
    ResetAllResourceLogLevelsRequestPrivate(const ResetAllResourceLogLevelsRequestPrivate &other,
                                   ResetAllResourceLogLevelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResetAllResourceLogLevelsRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
