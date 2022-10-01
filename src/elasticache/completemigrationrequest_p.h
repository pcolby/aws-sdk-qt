// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPLETEMIGRATIONREQUEST_P_H
#define QTAWS_COMPLETEMIGRATIONREQUEST_P_H

#include "elasticacherequest_p.h"
#include "completemigrationrequest.h"

namespace QtAws {
namespace ElastiCache {

class CompleteMigrationRequest;

class CompleteMigrationRequestPrivate : public ElastiCacheRequestPrivate {

public:
    CompleteMigrationRequestPrivate(const ElastiCacheRequest::Action action,
                                   CompleteMigrationRequest * const q);
    CompleteMigrationRequestPrivate(const CompleteMigrationRequestPrivate &other,
                                   CompleteMigrationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CompleteMigrationRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
