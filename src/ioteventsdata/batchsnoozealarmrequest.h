// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHSNOOZEALARMREQUEST_H
#define QTAWS_BATCHSNOOZEALARMREQUEST_H

#include "ioteventsdatarequest.h"

namespace QtAws {
namespace IoTEventsData {

class BatchSnoozeAlarmRequestPrivate;

class QTAWSIOTEVENTSDATA_EXPORT BatchSnoozeAlarmRequest : public IoTEventsDataRequest {

public:
    BatchSnoozeAlarmRequest(const BatchSnoozeAlarmRequest &other);
    BatchSnoozeAlarmRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchSnoozeAlarmRequest)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
