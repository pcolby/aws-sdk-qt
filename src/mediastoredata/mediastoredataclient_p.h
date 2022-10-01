// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIASTOREDATACLIENT_P_H
#define QTAWS_MEDIASTOREDATACLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace MediaStoreData {

class MediaStoreDataClient;

class MediaStoreDataClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit MediaStoreDataClientPrivate(MediaStoreDataClient * const q);

private:
    Q_DECLARE_PUBLIC(MediaStoreDataClient)
    Q_DISABLE_COPY(MediaStoreDataClientPrivate)

};

} // namespace MediaStoreData
} // namespace QtAws

#endif
