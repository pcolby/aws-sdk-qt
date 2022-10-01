// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SESCLIENT_P_H
#define QTAWS_SESCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Ses {

class SesClient;

class SesClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit SesClientPrivate(SesClient * const q);

private:
    Q_DECLARE_PUBLIC(SesClient)
    Q_DISABLE_COPY(SesClientPrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
