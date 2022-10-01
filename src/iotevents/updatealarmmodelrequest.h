// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEALARMMODELREQUEST_H
#define QTAWS_UPDATEALARMMODELREQUEST_H

#include "ioteventsrequest.h"

namespace QtAws {
namespace IoTEvents {

class UpdateAlarmModelRequestPrivate;

class QTAWSIOTEVENTS_EXPORT UpdateAlarmModelRequest : public IoTEventsRequest {

public:
    UpdateAlarmModelRequest(const UpdateAlarmModelRequest &other);
    UpdateAlarmModelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAlarmModelRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
