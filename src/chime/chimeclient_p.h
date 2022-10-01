// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHIMECLIENT_P_H
#define QTAWS_CHIMECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Chime {

class ChimeClient;

class ChimeClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ChimeClientPrivate(ChimeClient * const q);

private:
    Q_DECLARE_PUBLIC(ChimeClient)
    Q_DISABLE_COPY(ChimeClientPrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
