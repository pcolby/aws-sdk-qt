// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPLACEMENTGROUPRESPONSE_P_H
#define QTAWS_CREATEPLACEMENTGROUPRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreatePlacementGroupResponse;

class CreatePlacementGroupResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreatePlacementGroupResponsePrivate(CreatePlacementGroupResponse * const q);

    void parseCreatePlacementGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePlacementGroupResponse)
    Q_DISABLE_COPY(CreatePlacementGroupResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
