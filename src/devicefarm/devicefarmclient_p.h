// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEVICEFARMCLIENT_P_H
#define QTAWS_DEVICEFARMCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace DeviceFarm {

class DeviceFarmClient;

class DeviceFarmClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit DeviceFarmClientPrivate(DeviceFarmClient * const q);

private:
    Q_DECLARE_PUBLIC(DeviceFarmClient)
    Q_DISABLE_COPY(DeviceFarmClientPrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
