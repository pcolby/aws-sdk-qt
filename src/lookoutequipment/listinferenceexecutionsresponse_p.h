// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINFERENCEEXECUTIONSRESPONSE_P_H
#define QTAWS_LISTINFERENCEEXECUTIONSRESPONSE_P_H

#include "lookoutequipmentresponse_p.h"

namespace QtAws {
namespace LookoutEquipment {

class ListInferenceExecutionsResponse;

class ListInferenceExecutionsResponsePrivate : public LookoutEquipmentResponsePrivate {

public:

    explicit ListInferenceExecutionsResponsePrivate(ListInferenceExecutionsResponse * const q);

    void parseListInferenceExecutionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListInferenceExecutionsResponse)
    Q_DISABLE_COPY(ListInferenceExecutionsResponsePrivate)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
