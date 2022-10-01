// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETV2LOGGINGLEVELREQUEST_P_H
#define QTAWS_SETV2LOGGINGLEVELREQUEST_P_H

#include "iotrequest_p.h"
#include "setv2logginglevelrequest.h"

namespace QtAws {
namespace IoT {

class SetV2LoggingLevelRequest;

class SetV2LoggingLevelRequestPrivate : public IoTRequestPrivate {

public:
    SetV2LoggingLevelRequestPrivate(const IoTRequest::Action action,
                                   SetV2LoggingLevelRequest * const q);
    SetV2LoggingLevelRequestPrivate(const SetV2LoggingLevelRequestPrivate &other,
                                   SetV2LoggingLevelRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetV2LoggingLevelRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
