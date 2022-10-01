// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPFLOWCLIENT_P_H
#define QTAWS_APPFLOWCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Appflow {

class AppflowClient;

class AppflowClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit AppflowClientPrivate(AppflowClient * const q);

private:
    Q_DECLARE_PUBLIC(AppflowClient)
    Q_DISABLE_COPY(AppflowClientPrivate)

};

} // namespace Appflow
} // namespace QtAws

#endif
