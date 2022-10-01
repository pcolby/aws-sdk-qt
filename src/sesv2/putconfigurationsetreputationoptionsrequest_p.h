// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONSETREPUTATIONOPTIONSREQUEST_P_H
#define QTAWS_PUTCONFIGURATIONSETREPUTATIONOPTIONSREQUEST_P_H

#include "sesv2request_p.h"
#include "putconfigurationsetreputationoptionsrequest.h"

namespace QtAws {
namespace SESv2 {

class PutConfigurationSetReputationOptionsRequest;

class PutConfigurationSetReputationOptionsRequestPrivate : public SESv2RequestPrivate {

public:
    PutConfigurationSetReputationOptionsRequestPrivate(const SESv2Request::Action action,
                                   PutConfigurationSetReputationOptionsRequest * const q);
    PutConfigurationSetReputationOptionsRequestPrivate(const PutConfigurationSetReputationOptionsRequestPrivate &other,
                                   PutConfigurationSetReputationOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutConfigurationSetReputationOptionsRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
