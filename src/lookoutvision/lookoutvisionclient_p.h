// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOOKOUTVISIONCLIENT_P_H
#define QTAWS_LOOKOUTVISIONCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace LookoutVision {

class LookoutVisionClient;

class LookoutVisionClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit LookoutVisionClientPrivate(LookoutVisionClient * const q);

private:
    Q_DECLARE_PUBLIC(LookoutVisionClient)
    Q_DISABLE_COPY(LookoutVisionClientPrivate)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
