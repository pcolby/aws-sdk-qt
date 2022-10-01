// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETRESOURCELOGLEVELREQUEST_P_H
#define QTAWS_RESETRESOURCELOGLEVELREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "resetresourceloglevelrequest.h"

namespace QtAws {
namespace IoTWireless {

class ResetResourceLogLevelRequest;

class ResetResourceLogLevelRequestPrivate : public IoTWirelessRequestPrivate {

public:
    ResetResourceLogLevelRequestPrivate(const IoTWirelessRequest::Action action,
                                   ResetResourceLogLevelRequest * const q);
    ResetResourceLogLevelRequestPrivate(const ResetResourceLogLevelRequestPrivate &other,
                                   ResetResourceLogLevelRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResetResourceLogLevelRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
