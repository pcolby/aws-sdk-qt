// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGGINGOPTIONSREQUEST_P_H
#define QTAWS_GETLOGGINGOPTIONSREQUEST_P_H

#include "iotrequest_p.h"
#include "getloggingoptionsrequest.h"

namespace QtAws {
namespace IoT {

class GetLoggingOptionsRequest;

class GetLoggingOptionsRequestPrivate : public IoTRequestPrivate {

public:
    GetLoggingOptionsRequestPrivate(const IoTRequest::Action action,
                                   GetLoggingOptionsRequest * const q);
    GetLoggingOptionsRequestPrivate(const GetLoggingOptionsRequestPrivate &other,
                                   GetLoggingOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLoggingOptionsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
