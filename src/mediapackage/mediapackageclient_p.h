// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIAPACKAGECLIENT_P_H
#define QTAWS_MEDIAPACKAGECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace MediaPackage {

class MediaPackageClient;

class MediaPackageClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit MediaPackageClientPrivate(MediaPackageClient * const q);

private:
    Q_DECLARE_PUBLIC(MediaPackageClient)
    Q_DISABLE_COPY(MediaPackageClientPrivate)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
