// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINFERENCESCHEDULERSRESPONSE_P_H
#define QTAWS_LISTINFERENCESCHEDULERSRESPONSE_P_H

#include "lookoutequipmentresponse_p.h"

namespace QtAws {
namespace LookoutEquipment {

class ListInferenceSchedulersResponse;

class ListInferenceSchedulersResponsePrivate : public LookoutEquipmentResponsePrivate {

public:

    explicit ListInferenceSchedulersResponsePrivate(ListInferenceSchedulersResponse * const q);

    void parseListInferenceSchedulersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListInferenceSchedulersResponse)
    Q_DISABLE_COPY(ListInferenceSchedulersResponsePrivate)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
