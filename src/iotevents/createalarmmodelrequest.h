// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEALARMMODELREQUEST_H
#define QTAWS_CREATEALARMMODELREQUEST_H

#include "ioteventsrequest.h"

namespace QtAws {
namespace IoTEvents {

class CreateAlarmModelRequestPrivate;

class QTAWSIOTEVENTS_EXPORT CreateAlarmModelRequest : public IoTEventsRequest {

public:
    CreateAlarmModelRequest(const CreateAlarmModelRequest &other);
    CreateAlarmModelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAlarmModelRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
