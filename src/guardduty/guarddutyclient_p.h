// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GUARDDUTYCLIENT_P_H
#define QTAWS_GUARDDUTYCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace GuardDuty {

class GuardDutyClient;

class GuardDutyClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit GuardDutyClientPrivate(GuardDutyClient * const q);

private:
    Q_DECLARE_PUBLIC(GuardDutyClient)
    Q_DISABLE_COPY(GuardDutyClientPrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
