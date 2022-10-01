// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AMPLIFYUIBUILDERCLIENT_P_H
#define QTAWS_AMPLIFYUIBUILDERCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace AmplifyUIBuilder {

class AmplifyUIBuilderClient;

class AmplifyUIBuilderClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit AmplifyUIBuilderClientPrivate(AmplifyUIBuilderClient * const q);

private:
    Q_DECLARE_PUBLIC(AmplifyUIBuilderClient)
    Q_DISABLE_COPY(AmplifyUIBuilderClientPrivate)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
