// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMIGRATIONREQUEST_P_H
#define QTAWS_STARTMIGRATIONREQUEST_P_H

#include "elasticacherequest_p.h"
#include "startmigrationrequest.h"

namespace QtAws {
namespace ElastiCache {

class StartMigrationRequest;

class StartMigrationRequestPrivate : public ElastiCacheRequestPrivate {

public:
    StartMigrationRequestPrivate(const ElastiCacheRequest::Action action,
                                   StartMigrationRequest * const q);
    StartMigrationRequestPrivate(const StartMigrationRequestPrivate &other,
                                   StartMigrationRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartMigrationRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
