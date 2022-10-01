// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACMCLIENT_P_H
#define QTAWS_ACMCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Acm {

class AcmClient;

class AcmClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit AcmClientPrivate(AcmClient * const q);

private:
    Q_DECLARE_PUBLIC(AcmClient)
    Q_DISABLE_COPY(AcmClientPrivate)

};

} // namespace Acm
} // namespace QtAws

#endif
