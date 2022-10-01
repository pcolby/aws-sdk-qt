// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DAXCLIENT_P_H
#define QTAWS_DAXCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Dax {

class DaxClient;

class DaxClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit DaxClientPrivate(DaxClient * const q);

private:
    Q_DECLARE_PUBLIC(DaxClient)
    Q_DISABLE_COPY(DaxClientPrivate)

};

} // namespace Dax
} // namespace QtAws

#endif
