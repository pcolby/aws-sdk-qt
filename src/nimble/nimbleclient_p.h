// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NIMBLECLIENT_P_H
#define QTAWS_NIMBLECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Nimble {

class NimbleClient;

class NimbleClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit NimbleClientPrivate(NimbleClient * const q);

private:
    Q_DECLARE_PUBLIC(NimbleClient)
    Q_DISABLE_COPY(NimbleClientPrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
