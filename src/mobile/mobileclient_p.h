// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MOBILECLIENT_P_H
#define QTAWS_MOBILECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Mobile {

class MobileClient;

class MobileClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit MobileClientPrivate(MobileClient * const q);

private:
    Q_DECLARE_PUBLIC(MobileClient)
    Q_DISABLE_COPY(MobileClientPrivate)

};

} // namespace Mobile
} // namespace QtAws

#endif
