// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIALIVECLIENT_P_H
#define QTAWS_MEDIALIVECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace MediaLive {

class MediaLiveClient;

class MediaLiveClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit MediaLiveClientPrivate(MediaLiveClient * const q);

private:
    Q_DECLARE_PUBLIC(MediaLiveClient)
    Q_DISABLE_COPY(MediaLiveClientPrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
