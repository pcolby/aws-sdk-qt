// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REDSHIFTCLIENT_P_H
#define QTAWS_REDSHIFTCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Redshift {

class RedshiftClient;

class RedshiftClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit RedshiftClientPrivate(RedshiftClient * const q);

private:
    Q_DECLARE_PUBLIC(RedshiftClient)
    Q_DISABLE_COPY(RedshiftClientPrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
