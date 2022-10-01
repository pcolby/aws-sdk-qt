// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUPPORTAPPCLIENT_P_H
#define QTAWS_SUPPORTAPPCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace SupportApp {

class SupportAppClient;

class SupportAppClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit SupportAppClientPrivate(SupportAppClient * const q);

private:
    Q_DECLARE_PUBLIC(SupportAppClient)
    Q_DISABLE_COPY(SupportAppClientPrivate)

};

} // namespace SupportApp
} // namespace QtAws

#endif
