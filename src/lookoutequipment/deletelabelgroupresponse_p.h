// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELABELGROUPRESPONSE_P_H
#define QTAWS_DELETELABELGROUPRESPONSE_P_H

#include "lookoutequipmentresponse_p.h"

namespace QtAws {
namespace LookoutEquipment {

class DeleteLabelGroupResponse;

class DeleteLabelGroupResponsePrivate : public LookoutEquipmentResponsePrivate {

public:

    explicit DeleteLabelGroupResponsePrivate(DeleteLabelGroupResponse * const q);

    void parseDeleteLabelGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLabelGroupResponse)
    Q_DISABLE_COPY(DeleteLabelGroupResponsePrivate)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
