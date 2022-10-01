// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPLETEMIGRATIONRESPONSE_H
#define QTAWS_COMPLETEMIGRATIONRESPONSE_H

#include "elasticacheresponse.h"
#include "completemigrationrequest.h"

namespace QtAws {
namespace ElastiCache {

class CompleteMigrationResponsePrivate;

class QTAWSELASTICACHE_EXPORT CompleteMigrationResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    CompleteMigrationResponse(const CompleteMigrationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CompleteMigrationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CompleteMigrationResponse)
    Q_DISABLE_COPY(CompleteMigrationResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
