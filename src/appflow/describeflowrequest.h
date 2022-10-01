// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLOWREQUEST_H
#define QTAWS_DESCRIBEFLOWREQUEST_H

#include "appflowrequest.h"

namespace QtAws {
namespace Appflow {

class DescribeFlowRequestPrivate;

class QTAWSAPPFLOW_EXPORT DescribeFlowRequest : public AppflowRequest {

public:
    DescribeFlowRequest(const DescribeFlowRequest &other);
    DescribeFlowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFlowRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif
