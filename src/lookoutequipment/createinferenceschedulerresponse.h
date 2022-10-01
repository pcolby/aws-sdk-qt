// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINFERENCESCHEDULERRESPONSE_H
#define QTAWS_CREATEINFERENCESCHEDULERRESPONSE_H

#include "lookoutequipmentresponse.h"
#include "createinferenceschedulerrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class CreateInferenceSchedulerResponsePrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT CreateInferenceSchedulerResponse : public LookoutEquipmentResponse {
    Q_OBJECT

public:
    CreateInferenceSchedulerResponse(const CreateInferenceSchedulerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateInferenceSchedulerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInferenceSchedulerResponse)
    Q_DISABLE_COPY(CreateInferenceSchedulerResponse)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
