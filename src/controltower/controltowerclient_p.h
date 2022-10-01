// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONTROLTOWERCLIENT_P_H
#define QTAWS_CONTROLTOWERCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ControlTower {

class ControlTowerClient;

class ControlTowerClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ControlTowerClientPrivate(ControlTowerClient * const q);

private:
    Q_DECLARE_PUBLIC(ControlTowerClient)
    Q_DISABLE_COPY(ControlTowerClientPrivate)

};

} // namespace ControlTower
} // namespace QtAws

#endif
