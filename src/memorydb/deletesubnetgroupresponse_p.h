// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUBNETGROUPRESPONSE_P_H
#define QTAWS_DELETESUBNETGROUPRESPONSE_P_H

#include "memorydbresponse_p.h"

namespace QtAws {
namespace MemoryDb {

class DeleteSubnetGroupResponse;

class DeleteSubnetGroupResponsePrivate : public MemoryDbResponsePrivate {

public:

    explicit DeleteSubnetGroupResponsePrivate(DeleteSubnetGroupResponse * const q);

    void parseDeleteSubnetGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSubnetGroupResponse)
    Q_DISABLE_COPY(DeleteSubnetGroupResponsePrivate)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
