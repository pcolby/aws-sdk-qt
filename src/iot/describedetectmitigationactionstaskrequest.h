// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDETECTMITIGATIONACTIONSTASKREQUEST_H
#define QTAWS_DESCRIBEDETECTMITIGATIONACTIONSTASKREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DescribeDetectMitigationActionsTaskRequestPrivate;

class QTAWSIOT_EXPORT DescribeDetectMitigationActionsTaskRequest : public IoTRequest {

public:
    DescribeDetectMitigationActionsTaskRequest(const DescribeDetectMitigationActionsTaskRequest &other);
    DescribeDetectMitigationActionsTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDetectMitigationActionsTaskRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
