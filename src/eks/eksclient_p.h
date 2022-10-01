// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EKSCLIENT_P_H
#define QTAWS_EKSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Eks {

class EksClient;

class EksClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit EksClientPrivate(EksClient * const q);

private:
    Q_DECLARE_PUBLIC(EksClient)
    Q_DISABLE_COPY(EksClientPrivate)

};

} // namespace Eks
} // namespace QtAws

#endif
