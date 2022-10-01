// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_HEALTHLAKECLIENT_P_H
#define QTAWS_HEALTHLAKECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace HealthLake {

class HealthLakeClient;

class HealthLakeClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit HealthLakeClientPrivate(HealthLakeClient * const q);

private:
    Q_DECLARE_PUBLIC(HealthLakeClient)
    Q_DISABLE_COPY(HealthLakeClientPrivate)

};

} // namespace HealthLake
} // namespace QtAws

#endif
