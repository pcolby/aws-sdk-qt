// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROBOMAKERCLIENT_P_H
#define QTAWS_ROBOMAKERCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace RoboMaker {

class RoboMakerClient;

class RoboMakerClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit RoboMakerClientPrivate(RoboMakerClient * const q);

private:
    Q_DECLARE_PUBLIC(RoboMakerClient)
    Q_DISABLE_COPY(RoboMakerClientPrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
