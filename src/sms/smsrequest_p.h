// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SMSREQUEST_P_H
#define QTAWS_SMSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "smsrequest.h"

namespace QtAws {
namespace Sms {

class SmsRequest;

class SmsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SmsRequest::Action action; ///< Sms action to be performed.
    QString apiVersion;        ///< Sms API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Sms request (query string) parameters. @todo?

    SmsRequestPrivate(const SmsRequest::Action action, SmsRequest * const q);
    SmsRequestPrivate(const SmsRequestPrivate &other, SmsRequest * const q);

    static QString toString(const SmsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SmsRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
