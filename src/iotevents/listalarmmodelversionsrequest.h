// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALARMMODELVERSIONSREQUEST_H
#define QTAWS_LISTALARMMODELVERSIONSREQUEST_H

#include "ioteventsrequest.h"

namespace QtAws {
namespace IoTEvents {

class ListAlarmModelVersionsRequestPrivate;

class QTAWSIOTEVENTS_EXPORT ListAlarmModelVersionsRequest : public IoTEventsRequest {

public:
    ListAlarmModelVersionsRequest(const ListAlarmModelVersionsRequest &other);
    ListAlarmModelVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAlarmModelVersionsRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
