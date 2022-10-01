// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELABELGROUPRESPONSE_P_H
#define QTAWS_UPDATELABELGROUPRESPONSE_P_H

#include "lookoutequipmentresponse_p.h"

namespace QtAws {
namespace LookoutEquipment {

class UpdateLabelGroupResponse;

class UpdateLabelGroupResponsePrivate : public LookoutEquipmentResponsePrivate {

public:

    explicit UpdateLabelGroupResponsePrivate(UpdateLabelGroupResponse * const q);

    void parseUpdateLabelGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateLabelGroupResponse)
    Q_DISABLE_COPY(UpdateLabelGroupResponsePrivate)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
