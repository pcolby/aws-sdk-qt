// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SHIELDCLIENT_P_H
#define QTAWS_SHIELDCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Shield {

class ShieldClient;

class ShieldClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ShieldClientPrivate(ShieldClient * const q);

private:
    Q_DECLARE_PUBLIC(ShieldClient)
    Q_DISABLE_COPY(ShieldClientPrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
