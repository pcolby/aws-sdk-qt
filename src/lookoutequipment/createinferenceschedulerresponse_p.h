// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINFERENCESCHEDULERRESPONSE_P_H
#define QTAWS_CREATEINFERENCESCHEDULERRESPONSE_P_H

#include "lookoutequipmentresponse_p.h"

namespace QtAws {
namespace LookoutEquipment {

class CreateInferenceSchedulerResponse;

class CreateInferenceSchedulerResponsePrivate : public LookoutEquipmentResponsePrivate {

public:

    explicit CreateInferenceSchedulerResponsePrivate(CreateInferenceSchedulerResponse * const q);

    void parseCreateInferenceSchedulerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateInferenceSchedulerResponse)
    Q_DISABLE_COPY(CreateInferenceSchedulerResponsePrivate)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
