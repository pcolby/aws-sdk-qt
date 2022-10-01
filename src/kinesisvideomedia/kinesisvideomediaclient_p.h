// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISVIDEOMEDIACLIENT_P_H
#define QTAWS_KINESISVIDEOMEDIACLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace KinesisVideoMedia {

class KinesisVideoMediaClient;

class KinesisVideoMediaClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit KinesisVideoMediaClientPrivate(KinesisVideoMediaClient * const q);

private:
    Q_DECLARE_PUBLIC(KinesisVideoMediaClient)
    Q_DISABLE_COPY(KinesisVideoMediaClientPrivate)

};

} // namespace KinesisVideoMedia
} // namespace QtAws

#endif
