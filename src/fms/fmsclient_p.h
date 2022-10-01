// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FMSCLIENT_P_H
#define QTAWS_FMSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Fms {

class FmsClient;

class FmsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit FmsClientPrivate(FmsClient * const q);

private:
    Q_DECLARE_PUBLIC(FmsClient)
    Q_DISABLE_COPY(FmsClientPrivate)

};

} // namespace Fms
} // namespace QtAws

#endif
