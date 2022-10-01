// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKFLOWEXECUTIONREQUEST_H
#define QTAWS_DESCRIBEWORKFLOWEXECUTIONREQUEST_H

#include "swfrequest.h"

namespace QtAws {
namespace Swf {

class DescribeWorkflowExecutionRequestPrivate;

class QTAWSSWF_EXPORT DescribeWorkflowExecutionRequest : public SwfRequest {

public:
    DescribeWorkflowExecutionRequest(const DescribeWorkflowExecutionRequest &other);
    DescribeWorkflowExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorkflowExecutionRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
