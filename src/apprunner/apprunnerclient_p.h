// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPRUNNERCLIENT_P_H
#define QTAWS_APPRUNNERCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace AppRunner {

class AppRunnerClient;

class AppRunnerClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit AppRunnerClientPrivate(AppRunnerClient * const q);

private:
    Q_DECLARE_PUBLIC(AppRunnerClient)
    Q_DISABLE_COPY(AppRunnerClientPrivate)

};

} // namespace AppRunner
} // namespace QtAws

#endif
