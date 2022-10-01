// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINFERENCESCHEDULERRESPONSE_P_H
#define QTAWS_UPDATEINFERENCESCHEDULERRESPONSE_P_H

#include "lookoutequipmentresponse_p.h"

namespace QtAws {
namespace LookoutEquipment {

class UpdateInferenceSchedulerResponse;

class UpdateInferenceSchedulerResponsePrivate : public LookoutEquipmentResponsePrivate {

public:

    explicit UpdateInferenceSchedulerResponsePrivate(UpdateInferenceSchedulerResponse * const q);

    void parseUpdateInferenceSchedulerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateInferenceSchedulerResponse)
    Q_DISABLE_COPY(UpdateInferenceSchedulerResponsePrivate)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
