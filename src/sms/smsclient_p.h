// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SMSCLIENT_P_H
#define QTAWS_SMSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Sms {

class SmsClient;

class SmsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit SmsClientPrivate(SmsClient * const q);

private:
    Q_DECLARE_PUBLIC(SmsClient)
    Q_DISABLE_COPY(SmsClientPrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
