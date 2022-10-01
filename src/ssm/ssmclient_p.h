// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSMCLIENT_P_H
#define QTAWS_SSMCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Ssm {

class SsmClient;

class SsmClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit SsmClientPrivate(SsmClient * const q);

private:
    Q_DECLARE_PUBLIC(SsmClient)
    Q_DISABLE_COPY(SsmClientPrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
