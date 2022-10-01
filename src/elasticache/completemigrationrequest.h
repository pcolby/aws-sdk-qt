// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPLETEMIGRATIONREQUEST_H
#define QTAWS_COMPLETEMIGRATIONREQUEST_H

#include "elasticacherequest.h"

namespace QtAws {
namespace ElastiCache {

class CompleteMigrationRequestPrivate;

class QTAWSELASTICACHE_EXPORT CompleteMigrationRequest : public ElastiCacheRequest {

public:
    CompleteMigrationRequest(const CompleteMigrationRequest &other);
    CompleteMigrationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CompleteMigrationRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
