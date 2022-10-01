// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISABLEALARMREQUEST_H
#define QTAWS_BATCHDISABLEALARMREQUEST_H

#include "ioteventsdatarequest.h"

namespace QtAws {
namespace IoTEventsData {

class BatchDisableAlarmRequestPrivate;

class QTAWSIOTEVENTSDATA_EXPORT BatchDisableAlarmRequest : public IoTEventsDataRequest {

public:
    BatchDisableAlarmRequest(const BatchDisableAlarmRequest &other);
    BatchDisableAlarmRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDisableAlarmRequest)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
