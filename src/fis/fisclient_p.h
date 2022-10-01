// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FISCLIENT_P_H
#define QTAWS_FISCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Fis {

class FisClient;

class FisClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit FisClientPrivate(FisClient * const q);

private:
    Q_DECLARE_PUBLIC(FisClient)
    Q_DISABLE_COPY(FisClientPrivate)

};

} // namespace Fis
} // namespace QtAws

#endif
