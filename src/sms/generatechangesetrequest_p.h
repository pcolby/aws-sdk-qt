// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATECHANGESETREQUEST_P_H
#define QTAWS_GENERATECHANGESETREQUEST_P_H

#include "smsrequest_p.h"
#include "generatechangesetrequest.h"

namespace QtAws {
namespace Sms {

class GenerateChangeSetRequest;

class GenerateChangeSetRequestPrivate : public SmsRequestPrivate {

public:
    GenerateChangeSetRequestPrivate(const SmsRequest::Action action,
                                   GenerateChangeSetRequest * const q);
    GenerateChangeSetRequestPrivate(const GenerateChangeSetRequestPrivate &other,
                                   GenerateChangeSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GenerateChangeSetRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
