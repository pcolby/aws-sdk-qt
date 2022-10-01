// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTINFERENCESCHEDULERRESPONSE_H
#define QTAWS_STARTINFERENCESCHEDULERRESPONSE_H

#include "lookoutequipmentresponse.h"
#include "startinferenceschedulerrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class StartInferenceSchedulerResponsePrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT StartInferenceSchedulerResponse : public LookoutEquipmentResponse {
    Q_OBJECT

public:
    StartInferenceSchedulerResponse(const StartInferenceSchedulerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartInferenceSchedulerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartInferenceSchedulerResponse)
    Q_DISABLE_COPY(StartInferenceSchedulerResponse)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
