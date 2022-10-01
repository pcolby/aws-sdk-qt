// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFIGURATIONSETREQUEST_P_H
#define QTAWS_GETCONFIGURATIONSETREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "getconfigurationsetrequest.h"

namespace QtAws {
namespace PinpointEmail {

class GetConfigurationSetRequest;

class GetConfigurationSetRequestPrivate : public PinpointEmailRequestPrivate {

public:
    GetConfigurationSetRequestPrivate(const PinpointEmailRequest::Action action,
                                   GetConfigurationSetRequest * const q);
    GetConfigurationSetRequestPrivate(const GetConfigurationSetRequestPrivate &other,
                                   GetConfigurationSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetConfigurationSetRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
