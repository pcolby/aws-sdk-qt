// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLABELGROUPSRESPONSE_P_H
#define QTAWS_LISTLABELGROUPSRESPONSE_P_H

#include "lookoutequipmentresponse_p.h"

namespace QtAws {
namespace LookoutEquipment {

class ListLabelGroupsResponse;

class ListLabelGroupsResponsePrivate : public LookoutEquipmentResponsePrivate {

public:

    explicit ListLabelGroupsResponsePrivate(ListLabelGroupsResponse * const q);

    void parseListLabelGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLabelGroupsResponse)
    Q_DISABLE_COPY(ListLabelGroupsResponsePrivate)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
