// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHIMESDKIDENTITYCLIENT_P_H
#define QTAWS_CHIMESDKIDENTITYCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ChimeSdkIdentity {

class ChimeSdkIdentityClient;

class ChimeSdkIdentityClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ChimeSdkIdentityClientPrivate(ChimeSdkIdentityClient * const q);

private:
    Q_DECLARE_PUBLIC(ChimeSdkIdentityClient)
    Q_DISABLE_COPY(ChimeSdkIdentityClientPrivate)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
