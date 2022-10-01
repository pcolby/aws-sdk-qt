// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLABELSRESPONSE_P_H
#define QTAWS_LISTLABELSRESPONSE_P_H

#include "lookoutequipmentresponse_p.h"

namespace QtAws {
namespace LookoutEquipment {

class ListLabelsResponse;

class ListLabelsResponsePrivate : public LookoutEquipmentResponsePrivate {

public:

    explicit ListLabelsResponsePrivate(ListLabelsResponse * const q);

    void parseListLabelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLabelsResponse)
    Q_DISABLE_COPY(ListLabelsResponsePrivate)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
