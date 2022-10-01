// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CUSTOMERPROFILESCLIENT_P_H
#define QTAWS_CUSTOMERPROFILESCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace CustomerProfiles {

class CustomerProfilesClient;

class CustomerProfilesClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit CustomerProfilesClientPrivate(CustomerProfilesClient * const q);

private:
    Q_DECLARE_PUBLIC(CustomerProfilesClient)
    Q_DISABLE_COPY(CustomerProfilesClientPrivate)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
