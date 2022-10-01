// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUDITSUPPRESSIONREQUEST_H
#define QTAWS_DESCRIBEAUDITSUPPRESSIONREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DescribeAuditSuppressionRequestPrivate;

class QTAWSIOT_EXPORT DescribeAuditSuppressionRequest : public IoTRequest {

public:
    DescribeAuditSuppressionRequest(const DescribeAuditSuppressionRequest &other);
    DescribeAuditSuppressionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAuditSuppressionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
