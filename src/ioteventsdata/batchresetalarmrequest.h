// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHRESETALARMREQUEST_H
#define QTAWS_BATCHRESETALARMREQUEST_H

#include "ioteventsdatarequest.h"

namespace QtAws {
namespace IoTEventsData {

class BatchResetAlarmRequestPrivate;

class QTAWSIOTEVENTSDATA_EXPORT BatchResetAlarmRequest : public IoTEventsDataRequest {

public:
    BatchResetAlarmRequest(const BatchResetAlarmRequest &other);
    BatchResetAlarmRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchResetAlarmRequest)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
