// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUBNETGROUPRESPONSE_P_H
#define QTAWS_DELETESUBNETGROUPRESPONSE_P_H

#include "daxresponse_p.h"

namespace QtAws {
namespace Dax {

class DeleteSubnetGroupResponse;

class DeleteSubnetGroupResponsePrivate : public DaxResponsePrivate {

public:

    explicit DeleteSubnetGroupResponsePrivate(DeleteSubnetGroupResponse * const q);

    void parseDeleteSubnetGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSubnetGroupResponse)
    Q_DISABLE_COPY(DeleteSubnetGroupResponsePrivate)

};

} // namespace Dax
} // namespace QtAws

#endif
