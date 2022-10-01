// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERGROUPRESPONSE_P_H
#define QTAWS_DELETEUSERGROUPRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class DeleteUserGroupResponse;

class DeleteUserGroupResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit DeleteUserGroupResponsePrivate(DeleteUserGroupResponse * const q);

    void parseDeleteUserGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteUserGroupResponse)
    Q_DISABLE_COPY(DeleteUserGroupResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
