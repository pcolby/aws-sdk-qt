// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ORGANIZATIONSCLIENT_P_H
#define QTAWS_ORGANIZATIONSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Organizations {

class OrganizationsClient;

class OrganizationsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit OrganizationsClientPrivate(OrganizationsClient * const q);

private:
    Q_DECLARE_PUBLIC(OrganizationsClient)
    Q_DISABLE_COPY(OrganizationsClientPrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
