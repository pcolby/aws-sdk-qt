// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOGGINGOPTIONSREQUEST_H
#define QTAWS_DESCRIBELOGGINGOPTIONSREQUEST_H

#include "ioteventsrequest.h"

namespace QtAws {
namespace IoTEvents {

class DescribeLoggingOptionsRequestPrivate;

class QTAWSIOTEVENTS_EXPORT DescribeLoggingOptionsRequest : public IoTEventsRequest {

public:
    DescribeLoggingOptionsRequest(const DescribeLoggingOptionsRequest &other);
    DescribeLoggingOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLoggingOptionsRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
