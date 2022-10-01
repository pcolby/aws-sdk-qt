// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIGNERCLIENT_P_H
#define QTAWS_SIGNERCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Signer {

class SignerClient;

class SignerClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit SignerClientPrivate(SignerClient * const q);

private:
    Q_DECLARE_PUBLIC(SignerClient)
    Q_DISABLE_COPY(SignerClientPrivate)

};

} // namespace Signer
} // namespace QtAws

#endif
