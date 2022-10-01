// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ECSCLIENT_P_H
#define QTAWS_ECSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Ecs {

class EcsClient;

class EcsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit EcsClientPrivate(EcsClient * const q);

private:
    Q_DECLARE_PUBLIC(EcsClient)
    Q_DISABLE_COPY(EcsClientPrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
