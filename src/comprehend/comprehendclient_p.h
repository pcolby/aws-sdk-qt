// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPREHENDCLIENT_P_H
#define QTAWS_COMPREHENDCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Comprehend {

class ComprehendClient;

class ComprehendClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ComprehendClientPrivate(ComprehendClient * const q);

private:
    Q_DECLARE_PUBLIC(ComprehendClient)
    Q_DISABLE_COPY(ComprehendClientPrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
