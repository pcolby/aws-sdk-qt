// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALARMMODELREQUEST_H
#define QTAWS_DELETEALARMMODELREQUEST_H

#include "ioteventsrequest.h"

namespace QtAws {
namespace IoTEvents {

class DeleteAlarmModelRequestPrivate;

class QTAWSIOTEVENTS_EXPORT DeleteAlarmModelRequest : public IoTEventsRequest {

public:
    DeleteAlarmModelRequest(const DeleteAlarmModelRequest &other);
    DeleteAlarmModelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAlarmModelRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
