// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PANORAMACLIENT_P_H
#define QTAWS_PANORAMACLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Panorama {

class PanoramaClient;

class PanoramaClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit PanoramaClientPrivate(PanoramaClient * const q);

private:
    Q_DECLARE_PUBLIC(PanoramaClient)
    Q_DISABLE_COPY(PanoramaClientPrivate)

};

} // namespace Panorama
} // namespace QtAws

#endif
