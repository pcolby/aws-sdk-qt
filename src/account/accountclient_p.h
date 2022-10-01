// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCOUNTCLIENT_P_H
#define QTAWS_ACCOUNTCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Account {

class AccountClient;

class AccountClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit AccountClientPrivate(AccountClient * const q);

private:
    Q_DECLARE_PUBLIC(AccountClient)
    Q_DISABLE_COPY(AccountClientPrivate)

};

} // namespace Account
} // namespace QtAws

#endif
