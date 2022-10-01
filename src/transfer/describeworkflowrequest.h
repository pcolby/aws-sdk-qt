// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKFLOWREQUEST_H
#define QTAWS_DESCRIBEWORKFLOWREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class DescribeWorkflowRequestPrivate;

class QTAWSTRANSFER_EXPORT DescribeWorkflowRequest : public TransferRequest {

public:
    DescribeWorkflowRequest(const DescribeWorkflowRequest &other);
    DescribeWorkflowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorkflowRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
