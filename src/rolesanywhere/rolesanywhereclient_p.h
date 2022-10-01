// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROLESANYWHERECLIENT_P_H
#define QTAWS_ROLESANYWHERECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace RolesAnywhere {

class RolesAnywhereClient;

class RolesAnywhereClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit RolesAnywhereClientPrivate(RolesAnywhereClient * const q);

private:
    Q_DECLARE_PUBLIC(RolesAnywhereClient)
    Q_DISABLE_COPY(RolesAnywhereClientPrivate)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
