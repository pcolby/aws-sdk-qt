// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHACKNOWLEDGEALARMREQUEST_H
#define QTAWS_BATCHACKNOWLEDGEALARMREQUEST_H

#include "ioteventsdatarequest.h"

namespace QtAws {
namespace IoTEventsData {

class BatchAcknowledgeAlarmRequestPrivate;

class QTAWSIOTEVENTSDATA_EXPORT BatchAcknowledgeAlarmRequest : public IoTEventsDataRequest {

public:
    BatchAcknowledgeAlarmRequest(const BatchAcknowledgeAlarmRequest &other);
    BatchAcknowledgeAlarmRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchAcknowledgeAlarmRequest)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
