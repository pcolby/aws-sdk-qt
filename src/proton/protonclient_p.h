// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROTONCLIENT_P_H
#define QTAWS_PROTONCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Proton {

class ProtonClient;

class ProtonClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ProtonClientPrivate(ProtonClient * const q);

private:
    Q_DECLARE_PUBLIC(ProtonClient)
    Q_DISABLE_COPY(ProtonClientPrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
