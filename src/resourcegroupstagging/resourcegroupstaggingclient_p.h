// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOURCEGROUPSTAGGINGCLIENT_P_H
#define QTAWS_RESOURCEGROUPSTAGGINGCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ResourceGroupsTagging {

class ResourceGroupsTaggingClient;

class ResourceGroupsTaggingClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ResourceGroupsTaggingClientPrivate(ResourceGroupsTaggingClient * const q);

private:
    Q_DECLARE_PUBLIC(ResourceGroupsTaggingClient)
    Q_DISABLE_COPY(ResourceGroupsTaggingClientPrivate)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif
