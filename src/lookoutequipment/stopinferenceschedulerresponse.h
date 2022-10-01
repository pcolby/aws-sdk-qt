// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPINFERENCESCHEDULERRESPONSE_H
#define QTAWS_STOPINFERENCESCHEDULERRESPONSE_H

#include "lookoutequipmentresponse.h"
#include "stopinferenceschedulerrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class StopInferenceSchedulerResponsePrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT StopInferenceSchedulerResponse : public LookoutEquipmentResponse {
    Q_OBJECT

public:
    StopInferenceSchedulerResponse(const StopInferenceSchedulerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopInferenceSchedulerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopInferenceSchedulerResponse)
    Q_DISABLE_COPY(StopInferenceSchedulerResponse)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
