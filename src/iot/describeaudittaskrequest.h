// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUDITTASKREQUEST_H
#define QTAWS_DESCRIBEAUDITTASKREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DescribeAuditTaskRequestPrivate;

class QTAWSIOT_EXPORT DescribeAuditTaskRequest : public IoTRequest {

public:
    DescribeAuditTaskRequest(const DescribeAuditTaskRequest &other);
    DescribeAuditTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAuditTaskRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
