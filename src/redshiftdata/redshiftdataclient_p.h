// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REDSHIFTDATACLIENT_P_H
#define QTAWS_REDSHIFTDATACLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace RedshiftData {

class RedshiftDataClient;

class RedshiftDataClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit RedshiftDataClientPrivate(RedshiftDataClient * const q);

private:
    Q_DECLARE_PUBLIC(RedshiftDataClient)
    Q_DISABLE_COPY(RedshiftDataClientPrivate)

};

} // namespace RedshiftData
} // namespace QtAws

#endif
