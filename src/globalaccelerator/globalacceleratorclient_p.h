// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GLOBALACCELERATORCLIENT_P_H
#define QTAWS_GLOBALACCELERATORCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace GlobalAccelerator {

class GlobalAcceleratorClient;

class GlobalAcceleratorClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit GlobalAcceleratorClientPrivate(GlobalAcceleratorClient * const q);

private:
    Q_DECLARE_PUBLIC(GlobalAcceleratorClient)
    Q_DISABLE_COPY(GlobalAcceleratorClientPrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
