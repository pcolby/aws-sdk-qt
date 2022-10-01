// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYOPTIONGROUPRESPONSE_P_H
#define QTAWS_MODIFYOPTIONGROUPRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class ModifyOptionGroupResponse;

class ModifyOptionGroupResponsePrivate : public RdsResponsePrivate {

public:

    explicit ModifyOptionGroupResponsePrivate(ModifyOptionGroupResponse * const q);

    void parseModifyOptionGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyOptionGroupResponse)
    Q_DISABLE_COPY(ModifyOptionGroupResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
