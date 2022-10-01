// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBSUBNETGROUPRESPONSE_P_H
#define QTAWS_DELETEDBSUBNETGROUPRESPONSE_P_H

#include "docdbresponse_p.h"

namespace QtAws {
namespace DocDb {

class DeleteDBSubnetGroupResponse;

class DeleteDBSubnetGroupResponsePrivate : public DocDbResponsePrivate {

public:

    explicit DeleteDBSubnetGroupResponsePrivate(DeleteDBSubnetGroupResponse * const q);

    void parseDeleteDBSubnetGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDBSubnetGroupResponse)
    Q_DISABLE_COPY(DeleteDBSubnetGroupResponsePrivate)

};

} // namespace DocDb
} // namespace QtAws

#endif
