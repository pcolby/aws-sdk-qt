// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RUMCLIENT_P_H
#define QTAWS_RUMCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Rum {

class RumClient;

class RumClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit RumClientPrivate(RumClient * const q);

private:
    Q_DECLARE_PUBLIC(RumClient)
    Q_DISABLE_COPY(RumClientPrivate)

};

} // namespace Rum
} // namespace QtAws

#endif
