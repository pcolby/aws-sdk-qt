// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCREATEDARTIFACTSREQUEST_P_H
#define QTAWS_LISTCREATEDARTIFACTSREQUEST_P_H

#include "migrationhubrequest_p.h"
#include "listcreatedartifactsrequest.h"

namespace QtAws {
namespace MigrationHub {

class ListCreatedArtifactsRequest;

class ListCreatedArtifactsRequestPrivate : public MigrationHubRequestPrivate {

public:
    ListCreatedArtifactsRequestPrivate(const MigrationHubRequest::Action action,
                                   ListCreatedArtifactsRequest * const q);
    ListCreatedArtifactsRequestPrivate(const ListCreatedArtifactsRequestPrivate &other,
                                   ListCreatedArtifactsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCreatedArtifactsRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
