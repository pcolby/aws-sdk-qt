// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONSETSENDINGOPTIONSREQUEST_P_H
#define QTAWS_PUTCONFIGURATIONSETSENDINGOPTIONSREQUEST_P_H

#include "sesv2request_p.h"
#include "putconfigurationsetsendingoptionsrequest.h"

namespace QtAws {
namespace SESv2 {

class PutConfigurationSetSendingOptionsRequest;

class PutConfigurationSetSendingOptionsRequestPrivate : public SESv2RequestPrivate {

public:
    PutConfigurationSetSendingOptionsRequestPrivate(const SESv2Request::Action action,
                                   PutConfigurationSetSendingOptionsRequest * const q);
    PutConfigurationSetSendingOptionsRequestPrivate(const PutConfigurationSetSendingOptionsRequestPrivate &other,
                                   PutConfigurationSetSendingOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutConfigurationSetSendingOptionsRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
