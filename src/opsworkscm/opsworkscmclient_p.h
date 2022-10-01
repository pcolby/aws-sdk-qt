// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OPSWORKSCMCLIENT_P_H
#define QTAWS_OPSWORKSCMCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace OpsWorksCm {

class OpsWorksCmClient;

class OpsWorksCmClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit OpsWorksCmClientPrivate(OpsWorksCmClient * const q);

private:
    Q_DECLARE_PUBLIC(OpsWorksCmClient)
    Q_DISABLE_COPY(OpsWorksCmClientPrivate)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
