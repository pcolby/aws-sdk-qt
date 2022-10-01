// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOURCEGROUPSCLIENT_P_H
#define QTAWS_RESOURCEGROUPSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ResourceGroups {

class ResourceGroupsClient;

class ResourceGroupsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ResourceGroupsClientPrivate(ResourceGroupsClient * const q);

private:
    Q_DECLARE_PUBLIC(ResourceGroupsClient)
    Q_DISABLE_COPY(ResourceGroupsClientPrivate)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
