// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSOADMINCLIENT_P_H
#define QTAWS_SSOADMINCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace SsoAdmin {

class SsoAdminClient;

class SsoAdminClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit SsoAdminClientPrivate(SsoAdminClient * const q);

private:
    Q_DECLARE_PUBLIC(SsoAdminClient)
    Q_DISABLE_COPY(SsoAdminClientPrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
