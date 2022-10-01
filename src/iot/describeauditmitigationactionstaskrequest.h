// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUDITMITIGATIONACTIONSTASKREQUEST_H
#define QTAWS_DESCRIBEAUDITMITIGATIONACTIONSTASKREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DescribeAuditMitigationActionsTaskRequestPrivate;

class QTAWSIOT_EXPORT DescribeAuditMitigationActionsTaskRequest : public IoTRequest {

public:
    DescribeAuditMitigationActionsTaskRequest(const DescribeAuditMitigationActionsTaskRequest &other);
    DescribeAuditMitigationActionsTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAuditMitigationActionsTaskRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
