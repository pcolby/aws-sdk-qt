// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERGROUPRESPONSE_P_H
#define QTAWS_CREATEUSERGROUPRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class CreateUserGroupResponse;

class CreateUserGroupResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit CreateUserGroupResponsePrivate(CreateUserGroupResponse * const q);

    void parseCreateUserGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateUserGroupResponse)
    Q_DISABLE_COPY(CreateUserGroupResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
