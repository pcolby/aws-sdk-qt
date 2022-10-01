// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINFERENCESCHEDULERRESPONSE_H
#define QTAWS_DELETEINFERENCESCHEDULERRESPONSE_H

#include "lookoutequipmentresponse.h"
#include "deleteinferenceschedulerrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class DeleteInferenceSchedulerResponsePrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT DeleteInferenceSchedulerResponse : public LookoutEquipmentResponse {
    Q_OBJECT

public:
    DeleteInferenceSchedulerResponse(const DeleteInferenceSchedulerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteInferenceSchedulerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInferenceSchedulerResponse)
    Q_DISABLE_COPY(DeleteInferenceSchedulerResponse)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
