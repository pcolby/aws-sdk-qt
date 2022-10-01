// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETPARAMETERGROUPRESPONSE_P_H
#define QTAWS_RESETPARAMETERGROUPRESPONSE_P_H

#include "memorydbresponse_p.h"

namespace QtAws {
namespace MemoryDb {

class ResetParameterGroupResponse;

class ResetParameterGroupResponsePrivate : public MemoryDbResponsePrivate {

public:

    explicit ResetParameterGroupResponsePrivate(ResetParameterGroupResponse * const q);

    void parseResetParameterGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResetParameterGroupResponse)
    Q_DISABLE_COPY(ResetParameterGroupResponsePrivate)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
