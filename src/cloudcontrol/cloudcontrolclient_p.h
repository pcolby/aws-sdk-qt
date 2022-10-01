// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDCONTROLCLIENT_P_H
#define QTAWS_CLOUDCONTROLCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace CloudControl {

class CloudControlClient;

class CloudControlClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit CloudControlClientPrivate(CloudControlClient * const q);

private:
    Q_DECLARE_PUBLIC(CloudControlClient)
    Q_DISABLE_COPY(CloudControlClientPrivate)

};

} // namespace CloudControl
} // namespace QtAws

#endif
