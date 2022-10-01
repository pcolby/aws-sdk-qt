// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPARAMETERGROUPRESPONSE_P_H
#define QTAWS_UPDATEPARAMETERGROUPRESPONSE_P_H

#include "memorydbresponse_p.h"

namespace QtAws {
namespace MemoryDb {

class UpdateParameterGroupResponse;

class UpdateParameterGroupResponsePrivate : public MemoryDbResponsePrivate {

public:

    explicit UpdateParameterGroupResponsePrivate(UpdateParameterGroupResponse * const q);

    void parseUpdateParameterGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateParameterGroupResponse)
    Q_DISABLE_COPY(UpdateParameterGroupResponsePrivate)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
