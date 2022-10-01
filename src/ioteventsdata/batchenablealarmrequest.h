// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHENABLEALARMREQUEST_H
#define QTAWS_BATCHENABLEALARMREQUEST_H

#include "ioteventsdatarequest.h"

namespace QtAws {
namespace IoTEventsData {

class BatchEnableAlarmRequestPrivate;

class QTAWSIOTEVENTSDATA_EXPORT BatchEnableAlarmRequest : public IoTEventsDataRequest {

public:
    BatchEnableAlarmRequest(const BatchEnableAlarmRequest &other);
    BatchEnableAlarmRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchEnableAlarmRequest)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
