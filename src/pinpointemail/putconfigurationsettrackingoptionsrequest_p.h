// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONSETTRACKINGOPTIONSREQUEST_P_H
#define QTAWS_PUTCONFIGURATIONSETTRACKINGOPTIONSREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "putconfigurationsettrackingoptionsrequest.h"

namespace QtAws {
namespace PinpointEmail {

class PutConfigurationSetTrackingOptionsRequest;

class PutConfigurationSetTrackingOptionsRequestPrivate : public PinpointEmailRequestPrivate {

public:
    PutConfigurationSetTrackingOptionsRequestPrivate(const PinpointEmailRequest::Action action,
                                   PutConfigurationSetTrackingOptionsRequest * const q);
    PutConfigurationSetTrackingOptionsRequestPrivate(const PutConfigurationSetTrackingOptionsRequestPrivate &other,
                                   PutConfigurationSetTrackingOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutConfigurationSetTrackingOptionsRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
