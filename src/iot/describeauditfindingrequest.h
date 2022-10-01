// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUDITFINDINGREQUEST_H
#define QTAWS_DESCRIBEAUDITFINDINGREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DescribeAuditFindingRequestPrivate;

class QTAWSIOT_EXPORT DescribeAuditFindingRequest : public IoTRequest {

public:
    DescribeAuditFindingRequest(const DescribeAuditFindingRequest &other);
    DescribeAuditFindingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAuditFindingRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
