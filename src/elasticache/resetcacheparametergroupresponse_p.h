// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETCACHEPARAMETERGROUPRESPONSE_P_H
#define QTAWS_RESETCACHEPARAMETERGROUPRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class ResetCacheParameterGroupResponse;

class ResetCacheParameterGroupResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit ResetCacheParameterGroupResponsePrivate(ResetCacheParameterGroupResponse * const q);

    void parseResetCacheParameterGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResetCacheParameterGroupResponse)
    Q_DISABLE_COPY(ResetCacheParameterGroupResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
