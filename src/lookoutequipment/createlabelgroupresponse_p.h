// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELABELGROUPRESPONSE_P_H
#define QTAWS_CREATELABELGROUPRESPONSE_P_H

#include "lookoutequipmentresponse_p.h"

namespace QtAws {
namespace LookoutEquipment {

class CreateLabelGroupResponse;

class CreateLabelGroupResponsePrivate : public LookoutEquipmentResponsePrivate {

public:

    explicit CreateLabelGroupResponsePrivate(CreateLabelGroupResponse * const q);

    void parseCreateLabelGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLabelGroupResponse)
    Q_DISABLE_COPY(CreateLabelGroupResponsePrivate)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
