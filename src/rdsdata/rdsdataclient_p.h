// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RDSDATACLIENT_P_H
#define QTAWS_RDSDATACLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace RdsData {

class RdsDataClient;

class RdsDataClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit RdsDataClientPrivate(RdsDataClient * const q);

private:
    Q_DECLARE_PUBLIC(RdsDataClient)
    Q_DISABLE_COPY(RdsDataClientPrivate)

};

} // namespace RdsData
} // namespace QtAws

#endif
