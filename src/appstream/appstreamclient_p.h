// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPSTREAMCLIENT_P_H
#define QTAWS_APPSTREAMCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace AppStream {

class AppStreamClient;

class AppStreamClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit AppStreamClientPrivate(AppStreamClient * const q);

private:
    Q_DECLARE_PUBLIC(AppStreamClient)
    Q_DISABLE_COPY(AppStreamClientPrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
