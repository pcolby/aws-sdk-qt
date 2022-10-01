// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINFERENCESCHEDULERRESPONSE_P_H
#define QTAWS_DELETEINFERENCESCHEDULERRESPONSE_P_H

#include "lookoutequipmentresponse_p.h"

namespace QtAws {
namespace LookoutEquipment {

class DeleteInferenceSchedulerResponse;

class DeleteInferenceSchedulerResponsePrivate : public LookoutEquipmentResponsePrivate {

public:

    explicit DeleteInferenceSchedulerResponsePrivate(DeleteInferenceSchedulerResponse * const q);

    void parseDeleteInferenceSchedulerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteInferenceSchedulerResponse)
    Q_DISABLE_COPY(DeleteInferenceSchedulerResponsePrivate)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
