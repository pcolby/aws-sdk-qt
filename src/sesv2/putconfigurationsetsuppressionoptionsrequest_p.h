// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONSETSUPPRESSIONOPTIONSREQUEST_P_H
#define QTAWS_PUTCONFIGURATIONSETSUPPRESSIONOPTIONSREQUEST_P_H

#include "sesv2request_p.h"
#include "putconfigurationsetsuppressionoptionsrequest.h"

namespace QtAws {
namespace SESv2 {

class PutConfigurationSetSuppressionOptionsRequest;

class PutConfigurationSetSuppressionOptionsRequestPrivate : public SESv2RequestPrivate {

public:
    PutConfigurationSetSuppressionOptionsRequestPrivate(const SESv2Request::Action action,
                                   PutConfigurationSetSuppressionOptionsRequest * const q);
    PutConfigurationSetSuppressionOptionsRequestPrivate(const PutConfigurationSetSuppressionOptionsRequestPrivate &other,
                                   PutConfigurationSetSuppressionOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutConfigurationSetSuppressionOptionsRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
