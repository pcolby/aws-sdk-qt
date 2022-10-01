// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AMPLIFYCLIENT_P_H
#define QTAWS_AMPLIFYCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Amplify {

class AmplifyClient;

class AmplifyClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit AmplifyClientPrivate(AmplifyClient * const q);

private:
    Q_DECLARE_PUBLIC(AmplifyClient)
    Q_DISABLE_COPY(AmplifyClientPrivate)

};

} // namespace Amplify
} // namespace QtAws

#endif
