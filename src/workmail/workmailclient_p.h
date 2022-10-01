// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WORKMAILCLIENT_P_H
#define QTAWS_WORKMAILCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace WorkMail {

class WorkMailClient;

class WorkMailClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit WorkMailClientPrivate(WorkMailClient * const q);

private:
    Q_DECLARE_PUBLIC(WorkMailClient)
    Q_DISABLE_COPY(WorkMailClientPrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
