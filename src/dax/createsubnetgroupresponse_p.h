// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUBNETGROUPRESPONSE_P_H
#define QTAWS_CREATESUBNETGROUPRESPONSE_P_H

#include "daxresponse_p.h"

namespace QtAws {
namespace Dax {

class CreateSubnetGroupResponse;

class CreateSubnetGroupResponsePrivate : public DaxResponsePrivate {

public:

    explicit CreateSubnetGroupResponsePrivate(CreateSubnetGroupResponse * const q);

    void parseCreateSubnetGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSubnetGroupResponse)
    Q_DISABLE_COPY(CreateSubnetGroupResponsePrivate)

};

} // namespace Dax
} // namespace QtAws

#endif
