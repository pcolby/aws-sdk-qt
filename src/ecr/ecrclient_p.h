// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ECRCLIENT_P_H
#define QTAWS_ECRCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Ecr {

class EcrClient;

class EcrClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit EcrClientPrivate(EcrClient * const q);

private:
    Q_DECLARE_PUBLIC(EcrClient)
    Q_DISABLE_COPY(EcrClientPrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif
