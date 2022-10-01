// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPLETEMIGRATIONRESPONSE_P_H
#define QTAWS_COMPLETEMIGRATIONRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class CompleteMigrationResponse;

class CompleteMigrationResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit CompleteMigrationResponsePrivate(CompleteMigrationResponse * const q);

    void parseCompleteMigrationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CompleteMigrationResponse)
    Q_DISABLE_COPY(CompleteMigrationResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
