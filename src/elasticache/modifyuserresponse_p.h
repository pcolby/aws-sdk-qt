// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYUSERRESPONSE_P_H
#define QTAWS_MODIFYUSERRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class ModifyUserResponse;

class ModifyUserResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit ModifyUserResponsePrivate(ModifyUserResponse * const q);

    void parseModifyUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyUserResponse)
    Q_DISABLE_COPY(ModifyUserResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
