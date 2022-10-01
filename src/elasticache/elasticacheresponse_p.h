// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICACHERESPONSE_P_H
#define QTAWS_ELASTICACHERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class ElastiCacheResponse;

class ElastiCacheResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ElastiCacheResponsePrivate(ElastiCacheResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ElastiCacheResponse)
    Q_DISABLE_COPY(ElastiCacheResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
