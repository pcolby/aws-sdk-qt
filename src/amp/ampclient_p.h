// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AMPCLIENT_P_H
#define QTAWS_AMPCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Amp {

class AmpClient;

class AmpClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit AmpClientPrivate(AmpClient * const q);

private:
    Q_DECLARE_PUBLIC(AmpClient)
    Q_DISABLE_COPY(AmpClientPrivate)

};

} // namespace Amp
} // namespace QtAws

#endif
