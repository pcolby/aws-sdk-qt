// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EMRCONTAINERSCLIENT_P_H
#define QTAWS_EMRCONTAINERSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Emrcontainers {

class EmrcontainersClient;

class EmrcontainersClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit EmrcontainersClientPrivate(EmrcontainersClient * const q);

private:
    Q_DECLARE_PUBLIC(EmrcontainersClient)
    Q_DISABLE_COPY(EmrcontainersClientPrivate)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
