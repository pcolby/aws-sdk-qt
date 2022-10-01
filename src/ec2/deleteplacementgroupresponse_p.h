// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPLACEMENTGROUPRESPONSE_P_H
#define QTAWS_DELETEPLACEMENTGROUPRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeletePlacementGroupResponse;

class DeletePlacementGroupResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeletePlacementGroupResponsePrivate(DeletePlacementGroupResponse * const q);

    void parseDeletePlacementGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePlacementGroupResponse)
    Q_DISABLE_COPY(DeletePlacementGroupResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
