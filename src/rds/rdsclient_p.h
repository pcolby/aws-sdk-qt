// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RDSCLIENT_P_H
#define QTAWS_RDSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Rds {

class RdsClient;

class RdsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit RdsClientPrivate(RdsClient * const q);

private:
    Q_DECLARE_PUBLIC(RdsClient)
    Q_DISABLE_COPY(RdsClientPrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
