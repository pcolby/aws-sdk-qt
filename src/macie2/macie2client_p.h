// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MACIE2CLIENT_P_H
#define QTAWS_MACIE2CLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Macie2 {

class Macie2Client;

class Macie2ClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit Macie2ClientPrivate(Macie2Client * const q);

private:
    Q_DECLARE_PUBLIC(Macie2Client)
    Q_DISABLE_COPY(Macie2ClientPrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
