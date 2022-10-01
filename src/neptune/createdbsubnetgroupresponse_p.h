// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBSUBNETGROUPRESPONSE_P_H
#define QTAWS_CREATEDBSUBNETGROUPRESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class CreateDBSubnetGroupResponse;

class CreateDBSubnetGroupResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit CreateDBSubnetGroupResponsePrivate(CreateDBSubnetGroupResponse * const q);

    void parseCreateDBSubnetGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDBSubnetGroupResponse)
    Q_DISABLE_COPY(CreateDBSubnetGroupResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
