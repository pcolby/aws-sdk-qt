// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REKOGNITIONCLIENT_P_H
#define QTAWS_REKOGNITIONCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Rekognition {

class RekognitionClient;

class RekognitionClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit RekognitionClientPrivate(RekognitionClient * const q);

private:
    Q_DECLARE_PUBLIC(RekognitionClient)
    Q_DISABLE_COPY(RekognitionClientPrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
