// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCELOGLEVELREQUEST_P_H
#define QTAWS_GETRESOURCELOGLEVELREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "getresourceloglevelrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetResourceLogLevelRequest;

class GetResourceLogLevelRequestPrivate : public IoTWirelessRequestPrivate {

public:
    GetResourceLogLevelRequestPrivate(const IoTWirelessRequest::Action action,
                                   GetResourceLogLevelRequest * const q);
    GetResourceLogLevelRequestPrivate(const GetResourceLogLevelRequestPrivate &other,
                                   GetResourceLogLevelRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResourceLogLevelRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
