// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISVIDEOARCHIVEDMEDIACLIENT_P_H
#define QTAWS_KINESISVIDEOARCHIVEDMEDIACLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace KinesisVideoArchivedMedia {

class KinesisVideoArchivedMediaClient;

class KinesisVideoArchivedMediaClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit KinesisVideoArchivedMediaClientPrivate(KinesisVideoArchivedMediaClient * const q);

private:
    Q_DECLARE_PUBLIC(KinesisVideoArchivedMediaClient)
    Q_DISABLE_COPY(KinesisVideoArchivedMediaClientPrivate)

};

} // namespace KinesisVideoArchivedMedia
} // namespace QtAws

#endif
