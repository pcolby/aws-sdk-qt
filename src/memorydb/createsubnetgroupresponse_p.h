// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUBNETGROUPRESPONSE_P_H
#define QTAWS_CREATESUBNETGROUPRESPONSE_P_H

#include "memorydbresponse_p.h"

namespace QtAws {
namespace MemoryDb {

class CreateSubnetGroupResponse;

class CreateSubnetGroupResponsePrivate : public MemoryDbResponsePrivate {

public:

    explicit CreateSubnetGroupResponsePrivate(CreateSubnetGroupResponse * const q);

    void parseCreateSubnetGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSubnetGroupResponse)
    Q_DISABLE_COPY(CreateSubnetGroupResponsePrivate)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
