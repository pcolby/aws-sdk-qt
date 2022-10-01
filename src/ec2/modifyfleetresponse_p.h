// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYFLEETRESPONSE_P_H
#define QTAWS_MODIFYFLEETRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyFleetResponse;

class ModifyFleetResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyFleetResponsePrivate(ModifyFleetResponse * const q);

    void parseModifyFleetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyFleetResponse)
    Q_DISABLE_COPY(ModifyFleetResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
