// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SERVICEQUOTASCLIENT_P_H
#define QTAWS_SERVICEQUOTASCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ServiceQuotas {

class ServiceQuotasClient;

class ServiceQuotasClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ServiceQuotasClientPrivate(ServiceQuotasClient * const q);

private:
    Q_DECLARE_PUBLIC(ServiceQuotasClient)
    Q_DISABLE_COPY(ServiceQuotasClientPrivate)

};

} // namespace ServiceQuotas
} // namespace QtAws

#endif
