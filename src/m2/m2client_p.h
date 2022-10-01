// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_M2CLIENT_P_H
#define QTAWS_M2CLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace M2 {

class M2Client;

class M2ClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit M2ClientPrivate(M2Client * const q);

private:
    Q_DECLARE_PUBLIC(M2Client)
    Q_DISABLE_COPY(M2ClientPrivate)

};

} // namespace M2
} // namespace QtAws

#endif
