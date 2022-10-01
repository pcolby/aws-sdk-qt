// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETLOGGINGOPTIONSREQUEST_P_H
#define QTAWS_SETLOGGINGOPTIONSREQUEST_P_H

#include "iotrequest_p.h"
#include "setloggingoptionsrequest.h"

namespace QtAws {
namespace IoT {

class SetLoggingOptionsRequest;

class SetLoggingOptionsRequestPrivate : public IoTRequestPrivate {

public:
    SetLoggingOptionsRequestPrivate(const IoTRequest::Action action,
                                   SetLoggingOptionsRequest * const q);
    SetLoggingOptionsRequestPrivate(const SetLoggingOptionsRequestPrivate &other,
                                   SetLoggingOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetLoggingOptionsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
