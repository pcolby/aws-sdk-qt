// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SNSCLIENT_P_H
#define QTAWS_SNSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Sns {

class SnsClient;

class SnsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit SnsClientPrivate(SnsClient * const q);

private:
    Q_DECLARE_PUBLIC(SnsClient)
    Q_DISABLE_COPY(SnsClientPrivate)

};

} // namespace Sns
} // namespace QtAws

#endif
