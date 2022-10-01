// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATHENACLIENT_P_H
#define QTAWS_ATHENACLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Athena {

class AthenaClient;

class AthenaClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit AthenaClientPrivate(AthenaClient * const q);

private:
    Q_DECLARE_PUBLIC(AthenaClient)
    Q_DISABLE_COPY(AthenaClientPrivate)

};

} // namespace Athena
} // namespace QtAws

#endif
