// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISVIDEOCLIENT_P_H
#define QTAWS_KINESISVIDEOCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace KinesisVideo {

class KinesisVideoClient;

class KinesisVideoClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit KinesisVideoClientPrivate(KinesisVideoClient * const q);

private:
    Q_DECLARE_PUBLIC(KinesisVideoClient)
    Q_DISABLE_COPY(KinesisVideoClientPrivate)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
