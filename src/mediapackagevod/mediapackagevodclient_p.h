// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIAPACKAGEVODCLIENT_P_H
#define QTAWS_MEDIAPACKAGEVODCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace MediaPackageVod {

class MediaPackageVodClient;

class MediaPackageVodClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit MediaPackageVodClientPrivate(MediaPackageVodClient * const q);

private:
    Q_DECLARE_PUBLIC(MediaPackageVodClient)
    Q_DISABLE_COPY(MediaPackageVodClientPrivate)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
