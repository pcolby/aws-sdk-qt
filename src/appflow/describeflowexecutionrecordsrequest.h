// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLOWEXECUTIONRECORDSREQUEST_H
#define QTAWS_DESCRIBEFLOWEXECUTIONRECORDSREQUEST_H

#include "appflowrequest.h"

namespace QtAws {
namespace Appflow {

class DescribeFlowExecutionRecordsRequestPrivate;

class QTAWSAPPFLOW_EXPORT DescribeFlowExecutionRecordsRequest : public AppflowRequest {

public:
    DescribeFlowExecutionRecordsRequest(const DescribeFlowExecutionRecordsRequest &other);
    DescribeFlowExecutionRecordsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFlowExecutionRecordsRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif
