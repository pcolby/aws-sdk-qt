// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPINFERENCESCHEDULERRESPONSE_P_H
#define QTAWS_STOPINFERENCESCHEDULERRESPONSE_P_H

#include "lookoutequipmentresponse_p.h"

namespace QtAws {
namespace LookoutEquipment {

class StopInferenceSchedulerResponse;

class StopInferenceSchedulerResponsePrivate : public LookoutEquipmentResponsePrivate {

public:

    explicit StopInferenceSchedulerResponsePrivate(StopInferenceSchedulerResponse * const q);

    void parseStopInferenceSchedulerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopInferenceSchedulerResponse)
    Q_DISABLE_COPY(StopInferenceSchedulerResponsePrivate)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
