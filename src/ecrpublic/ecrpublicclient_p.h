// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ECRPUBLICCLIENT_P_H
#define QTAWS_ECRPUBLICCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace EcrPublic {

class EcrPublicClient;

class EcrPublicClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit EcrPublicClientPrivate(EcrPublicClient * const q);

private:
    Q_DECLARE_PUBLIC(EcrPublicClient)
    Q_DISABLE_COPY(EcrPublicClientPrivate)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
