// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACMPCACLIENT_P_H
#define QTAWS_ACMPCACLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace AcmPca {

class AcmPcaClient;

class AcmPcaClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit AcmPcaClientPrivate(AcmPcaClient * const q);

private:
    Q_DECLARE_PUBLIC(AcmPcaClient)
    Q_DISABLE_COPY(AcmPcaClientPrivate)

};

} // namespace AcmPca
} // namespace QtAws

#endif
