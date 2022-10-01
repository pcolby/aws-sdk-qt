// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_XRAYCLIENT_P_H
#define QTAWS_XRAYCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace XRay {

class XRayClient;

class XRayClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit XRayClientPrivate(XRayClient * const q);

private:
    Q_DECLARE_PUBLIC(XRayClient)
    Q_DISABLE_COPY(XRayClientPrivate)

};

} // namespace XRay
} // namespace QtAws

#endif
