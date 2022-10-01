// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINFERENCEEVENTSRESPONSE_P_H
#define QTAWS_LISTINFERENCEEVENTSRESPONSE_P_H

#include "lookoutequipmentresponse_p.h"

namespace QtAws {
namespace LookoutEquipment {

class ListInferenceEventsResponse;

class ListInferenceEventsResponsePrivate : public LookoutEquipmentResponsePrivate {

public:

    explicit ListInferenceEventsResponsePrivate(ListInferenceEventsResponse * const q);

    void parseListInferenceEventsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListInferenceEventsResponse)
    Q_DISABLE_COPY(ListInferenceEventsResponsePrivate)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
