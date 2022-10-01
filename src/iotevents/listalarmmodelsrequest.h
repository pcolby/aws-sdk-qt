// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALARMMODELSREQUEST_H
#define QTAWS_LISTALARMMODELSREQUEST_H

#include "ioteventsrequest.h"

namespace QtAws {
namespace IoTEvents {

class ListAlarmModelsRequestPrivate;

class QTAWSIOTEVENTS_EXPORT ListAlarmModelsRequest : public IoTEventsRequest {

public:
    ListAlarmModelsRequest(const ListAlarmModelsRequest &other);
    ListAlarmModelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAlarmModelsRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
