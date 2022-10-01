// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESUBNETGROUPRESPONSE_P_H
#define QTAWS_UPDATESUBNETGROUPRESPONSE_P_H

#include "daxresponse_p.h"

namespace QtAws {
namespace Dax {

class UpdateSubnetGroupResponse;

class UpdateSubnetGroupResponsePrivate : public DaxResponsePrivate {

public:

    explicit UpdateSubnetGroupResponsePrivate(UpdateSubnetGroupResponse * const q);

    void parseUpdateSubnetGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSubnetGroupResponse)
    Q_DISABLE_COPY(UpdateSubnetGroupResponsePrivate)

};

} // namespace Dax
} // namespace QtAws

#endif
