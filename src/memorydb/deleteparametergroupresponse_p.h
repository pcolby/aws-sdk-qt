// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARAMETERGROUPRESPONSE_P_H
#define QTAWS_DELETEPARAMETERGROUPRESPONSE_P_H

#include "memorydbresponse_p.h"

namespace QtAws {
namespace MemoryDb {

class DeleteParameterGroupResponse;

class DeleteParameterGroupResponsePrivate : public MemoryDbResponsePrivate {

public:

    explicit DeleteParameterGroupResponsePrivate(DeleteParameterGroupResponse * const q);

    void parseDeleteParameterGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteParameterGroupResponse)
    Q_DISABLE_COPY(DeleteParameterGroupResponsePrivate)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
