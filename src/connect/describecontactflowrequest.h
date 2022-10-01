// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTACTFLOWREQUEST_H
#define QTAWS_DESCRIBECONTACTFLOWREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class DescribeContactFlowRequestPrivate;

class QTAWSCONNECT_EXPORT DescribeContactFlowRequest : public ConnectRequest {

public:
    DescribeContactFlowRequest(const DescribeContactFlowRequest &other);
    DescribeContactFlowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeContactFlowRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
