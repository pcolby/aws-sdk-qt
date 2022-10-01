// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEDULEDAUDITREQUEST_H
#define QTAWS_DESCRIBESCHEDULEDAUDITREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DescribeScheduledAuditRequestPrivate;

class QTAWSIOT_EXPORT DescribeScheduledAuditRequest : public IoTRequest {

public:
    DescribeScheduledAuditRequest(const DescribeScheduledAuditRequest &other);
    DescribeScheduledAuditRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeScheduledAuditRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
