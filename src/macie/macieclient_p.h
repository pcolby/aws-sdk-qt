// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MACIECLIENT_P_H
#define QTAWS_MACIECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Macie {

class MacieClient;

class MacieClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit MacieClientPrivate(MacieClient * const q);

private:
    Q_DECLARE_PUBLIC(MacieClient)
    Q_DISABLE_COPY(MacieClientPrivate)

};

} // namespace Macie
} // namespace QtAws

#endif
