// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETV2LOGGINGOPTIONSREQUEST_P_H
#define QTAWS_SETV2LOGGINGOPTIONSREQUEST_P_H

#include "iotrequest_p.h"
#include "setv2loggingoptionsrequest.h"

namespace QtAws {
namespace IoT {

class SetV2LoggingOptionsRequest;

class SetV2LoggingOptionsRequestPrivate : public IoTRequestPrivate {

public:
    SetV2LoggingOptionsRequestPrivate(const IoTRequest::Action action,
                                   SetV2LoggingOptionsRequest * const q);
    SetV2LoggingOptionsRequestPrivate(const SetV2LoggingOptionsRequestPrivate &other,
                                   SetV2LoggingOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetV2LoggingOptionsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
