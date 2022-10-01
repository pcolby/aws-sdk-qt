// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTREQUEST_H
#define QTAWS_DESCRIBEENDPOINTREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeEndpointRequestPrivate;

class QTAWSCOMPREHEND_EXPORT DescribeEndpointRequest : public ComprehendRequest {

public:
    DescribeEndpointRequest(const DescribeEndpointRequest &other);
    DescribeEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEndpointRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
