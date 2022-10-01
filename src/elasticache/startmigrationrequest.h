// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMIGRATIONREQUEST_H
#define QTAWS_STARTMIGRATIONREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class StartMigrationRequestPrivate;

class QTAWSELASTICACHE_EXPORT StartMigrationRequest : public ElastiCacheRequest {

public:
    StartMigrationRequest(const StartMigrationRequest &other);
    StartMigrationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartMigrationRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
