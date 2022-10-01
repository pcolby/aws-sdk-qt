// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOT1CLICKPROJECTSCLIENT_P_H
#define QTAWS_IOT1CLICKPROJECTSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace IoT1ClickProjects {

class IoT1ClickProjectsClient;

class IoT1ClickProjectsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit IoT1ClickProjectsClientPrivate(IoT1ClickProjectsClient * const q);

private:
    Q_DECLARE_PUBLIC(IoT1ClickProjectsClient)
    Q_DISABLE_COPY(IoT1ClickProjectsClientPrivate)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
