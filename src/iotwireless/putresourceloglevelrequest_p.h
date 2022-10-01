// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRESOURCELOGLEVELREQUEST_P_H
#define QTAWS_PUTRESOURCELOGLEVELREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "putresourceloglevelrequest.h"

namespace QtAws {
namespace IoTWireless {

class PutResourceLogLevelRequest;

class PutResourceLogLevelRequestPrivate : public IoTWirelessRequestPrivate {

public:
    PutResourceLogLevelRequestPrivate(const IoTWirelessRequest::Action action,
                                   PutResourceLogLevelRequest * const q);
    PutResourceLogLevelRequestPrivate(const PutResourceLogLevelRequestPrivate &other,
                                   PutResourceLogLevelRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutResourceLogLevelRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
