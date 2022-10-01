// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUPPORTCLIENT_P_H
#define QTAWS_SUPPORTCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Support {

class SupportClient;

class SupportClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit SupportClientPrivate(SupportClient * const q);

private:
    Q_DECLARE_PUBLIC(SupportClient)
    Q_DISABLE_COPY(SupportClientPrivate)

};

} // namespace Support
} // namespace QtAws

#endif
