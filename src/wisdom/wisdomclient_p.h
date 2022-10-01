// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WISDOMCLIENT_P_H
#define QTAWS_WISDOMCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Wisdom {

class WisdomClient;

class WisdomClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit WisdomClientPrivate(WisdomClient * const q);

private:
    Q_DECLARE_PUBLIC(WisdomClient)
    Q_DISABLE_COPY(WisdomClientPrivate)

};

} // namespace Wisdom
} // namespace QtAws

#endif
