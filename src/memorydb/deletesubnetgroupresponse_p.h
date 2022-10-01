/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
