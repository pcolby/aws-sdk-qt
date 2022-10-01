// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSPOTFLEETREQUESTRESPONSE_P_H
#define QTAWS_MODIFYSPOTFLEETREQUESTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifySpotFleetRequestResponse;

class ModifySpotFleetRequestResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifySpotFleetRequestResponsePrivate(ModifySpotFleetRequestResponse * const q);

    void parseModifySpotFleetRequestResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifySpotFleetRequestResponse)
    Q_DISABLE_COPY(ModifySpotFleetRequestResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
