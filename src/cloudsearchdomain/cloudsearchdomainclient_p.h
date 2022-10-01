// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDSEARCHDOMAINCLIENT_P_H
#define QTAWS_CLOUDSEARCHDOMAINCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace CloudSearchDomain {

class CloudSearchDomainClient;

class CloudSearchDomainClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit CloudSearchDomainClientPrivate(CloudSearchDomainClient * const q);

private:
    Q_DECLARE_PUBLIC(CloudSearchDomainClient)
    Q_DISABLE_COPY(CloudSearchDomainClientPrivate)

};

} // namespace CloudSearchDomain
} // namespace QtAws

#endif
