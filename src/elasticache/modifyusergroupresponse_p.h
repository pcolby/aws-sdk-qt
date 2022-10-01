// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYUSERGROUPRESPONSE_P_H
#define QTAWS_MODIFYUSERGROUPRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class ModifyUserGroupResponse;

class ModifyUserGroupResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit ModifyUserGroupResponsePrivate(ModifyUserGroupResponse * const q);

    void parseModifyUserGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyUserGroupResponse)
    Q_DISABLE_COPY(ModifyUserGroupResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
