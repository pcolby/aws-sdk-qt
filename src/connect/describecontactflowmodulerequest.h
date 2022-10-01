// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTACTFLOWMODULEREQUEST_H
#define QTAWS_DESCRIBECONTACTFLOWMODULEREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class DescribeContactFlowModuleRequestPrivate;

class QTAWSCONNECT_EXPORT DescribeContactFlowModuleRequest : public ConnectRequest {

public:
    DescribeContactFlowModuleRequest(const DescribeContactFlowModuleRequest &other);
    DescribeContactFlowModuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeContactFlowModuleRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
