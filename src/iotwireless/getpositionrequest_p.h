// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPOSITIONREQUEST_P_H
#define QTAWS_GETPOSITIONREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "getpositionrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetPositionRequest;

class GetPositionRequestPrivate : public IoTWirelessRequestPrivate {

public:
    GetPositionRequestPrivate(const IoTWirelessRequest::Action action,
                                   GetPositionRequest * const q);
    GetPositionRequestPrivate(const GetPositionRequestPrivate &other,
                                   GetPositionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPositionRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
