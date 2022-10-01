// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBEXECUTIONREQUEST_H
#define QTAWS_DESCRIBEJOBEXECUTIONREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DescribeJobExecutionRequestPrivate;

class QTAWSIOT_EXPORT DescribeJobExecutionRequest : public IoTRequest {

public:
    DescribeJobExecutionRequest(const DescribeJobExecutionRequest &other);
    DescribeJobExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeJobExecutionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
