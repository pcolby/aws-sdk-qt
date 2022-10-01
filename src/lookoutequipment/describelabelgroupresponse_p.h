// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELABELGROUPRESPONSE_P_H
#define QTAWS_DESCRIBELABELGROUPRESPONSE_P_H

#include "lookoutequipmentresponse_p.h"

namespace QtAws {
namespace LookoutEquipment {

class DescribeLabelGroupResponse;

class DescribeLabelGroupResponsePrivate : public LookoutEquipmentResponsePrivate {

public:

    explicit DescribeLabelGroupResponsePrivate(DescribeLabelGroupResponse * const q);

    void parseDescribeLabelGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLabelGroupResponse)
    Q_DISABLE_COPY(DescribeLabelGroupResponsePrivate)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
