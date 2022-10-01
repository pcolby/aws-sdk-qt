// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECACHEPARAMETERGROUPRESPONSE_P_H
#define QTAWS_CREATECACHEPARAMETERGROUPRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class CreateCacheParameterGroupResponse;

class CreateCacheParameterGroupResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit CreateCacheParameterGroupResponsePrivate(CreateCacheParameterGroupResponse * const q);

    void parseCreateCacheParameterGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCacheParameterGroupResponse)
    Q_DISABLE_COPY(CreateCacheParameterGroupResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
