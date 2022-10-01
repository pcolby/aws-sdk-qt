// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DIRECTORYSERVICECLIENT_P_H
#define QTAWS_DIRECTORYSERVICECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace DirectoryService {

class DirectoryServiceClient;

class DirectoryServiceClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit DirectoryServiceClientPrivate(DirectoryServiceClient * const q);

private:
    Q_DECLARE_PUBLIC(DirectoryServiceClient)
    Q_DISABLE_COPY(DirectoryServiceClientPrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
