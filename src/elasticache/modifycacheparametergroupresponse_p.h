// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCACHEPARAMETERGROUPRESPONSE_P_H
#define QTAWS_MODIFYCACHEPARAMETERGROUPRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class ModifyCacheParameterGroupResponse;

class ModifyCacheParameterGroupResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit ModifyCacheParameterGroupResponsePrivate(ModifyCacheParameterGroupResponse * const q);

    void parseModifyCacheParameterGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyCacheParameterGroupResponse)
    Q_DISABLE_COPY(ModifyCacheParameterGroupResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
