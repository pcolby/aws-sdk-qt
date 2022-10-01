// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIASTORECLIENT_P_H
#define QTAWS_MEDIASTORECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace MediaStore {

class MediaStoreClient;

class MediaStoreClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit MediaStoreClientPrivate(MediaStoreClient * const q);

private:
    Q_DECLARE_PUBLIC(MediaStoreClient)
    Q_DISABLE_COPY(MediaStoreClientPrivate)

};

} // namespace MediaStore
} // namespace QtAws

#endif
