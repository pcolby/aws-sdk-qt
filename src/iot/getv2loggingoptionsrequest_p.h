// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETV2LOGGINGOPTIONSREQUEST_P_H
#define QTAWS_GETV2LOGGINGOPTIONSREQUEST_P_H

#include "iotrequest_p.h"
#include "getv2loggingoptionsrequest.h"

namespace QtAws {
namespace IoT {

class GetV2LoggingOptionsRequest;

class GetV2LoggingOptionsRequestPrivate : public IoTRequestPrivate {

public:
    GetV2LoggingOptionsRequestPrivate(const IoTRequest::Action action,
                                   GetV2LoggingOptionsRequest * const q);
    GetV2LoggingOptionsRequestPrivate(const GetV2LoggingOptionsRequestPrivate &other,
                                   GetV2LoggingOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetV2LoggingOptionsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
