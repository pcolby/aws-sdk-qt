// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDDIRECTORYCLIENT_P_H
#define QTAWS_CLOUDDIRECTORYCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace CloudDirectory {

class CloudDirectoryClient;

class CloudDirectoryClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit CloudDirectoryClientPrivate(CloudDirectoryClient * const q);

private:
    Q_DECLARE_PUBLIC(CloudDirectoryClient)
    Q_DISABLE_COPY(CloudDirectoryClientPrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
