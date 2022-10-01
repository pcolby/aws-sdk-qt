// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINFERENCESCHEDULERRESPONSE_H
#define QTAWS_UPDATEINFERENCESCHEDULERRESPONSE_H

#include "lookoutequipmentresponse.h"
#include "updateinferenceschedulerrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class UpdateInferenceSchedulerResponsePrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT UpdateInferenceSchedulerResponse : public LookoutEquipmentResponse {
    Q_OBJECT

public:
    UpdateInferenceSchedulerResponse(const UpdateInferenceSchedulerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateInferenceSchedulerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateInferenceSchedulerResponse)
    Q_DISABLE_COPY(UpdateInferenceSchedulerResponse)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
