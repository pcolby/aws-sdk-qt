// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECACHEPARAMETERGROUPRESPONSE_P_H
#define QTAWS_DELETECACHEPARAMETERGROUPRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class DeleteCacheParameterGroupResponse;

class DeleteCacheParameterGroupResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit DeleteCacheParameterGroupResponsePrivate(DeleteCacheParameterGroupResponse * const q);

    void parseDeleteCacheParameterGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCacheParameterGroupResponse)
    Q_DISABLE_COPY(DeleteCacheParameterGroupResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
