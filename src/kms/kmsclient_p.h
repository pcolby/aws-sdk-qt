// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KMSCLIENT_P_H
#define QTAWS_KMSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Kms {

class KmsClient;

class KmsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit KmsClientPrivate(KmsClient * const q);

private:
    Q_DECLARE_PUBLIC(KmsClient)
    Q_DISABLE_COPY(KmsClientPrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
