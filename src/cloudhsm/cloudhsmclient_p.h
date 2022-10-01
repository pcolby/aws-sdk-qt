// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDHSMCLIENT_P_H
#define QTAWS_CLOUDHSMCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace CloudHsm {

class CloudHsmClient;

class CloudHsmClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit CloudHsmClientPrivate(CloudHsmClient * const q);

private:
    Q_DECLARE_PUBLIC(CloudHsmClient)
    Q_DISABLE_COPY(CloudHsmClientPrivate)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
