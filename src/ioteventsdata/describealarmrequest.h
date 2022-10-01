// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALARMREQUEST_H
#define QTAWS_DESCRIBEALARMREQUEST_H

#include "ioteventsdatarequest.h"

namespace QtAws {
namespace IoTEventsData {

class DescribeAlarmRequestPrivate;

class QTAWSIOTEVENTSDATA_EXPORT DescribeAlarmRequest : public IoTEventsDataRequest {

public:
    DescribeAlarmRequest(const DescribeAlarmRequest &other);
    DescribeAlarmRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAlarmRequest)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
