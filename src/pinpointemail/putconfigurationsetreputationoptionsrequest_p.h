// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONSETREPUTATIONOPTIONSREQUEST_P_H
#define QTAWS_PUTCONFIGURATIONSETREPUTATIONOPTIONSREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "putconfigurationsetreputationoptionsrequest.h"

namespace QtAws {
namespace PinpointEmail {

class PutConfigurationSetReputationOptionsRequest;

class PutConfigurationSetReputationOptionsRequestPrivate : public PinpointEmailRequestPrivate {

public:
    PutConfigurationSetReputationOptionsRequestPrivate(const PinpointEmailRequest::Action action,
                                   PutConfigurationSetReputationOptionsRequest * const q);
    PutConfigurationSetReputationOptionsRequestPrivate(const PutConfigurationSetReputationOptionsRequestPrivate &other,
                                   PutConfigurationSetReputationOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutConfigurationSetReputationOptionsRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
