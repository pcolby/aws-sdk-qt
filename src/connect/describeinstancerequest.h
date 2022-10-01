// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEREQUEST_H
#define QTAWS_DESCRIBEINSTANCEREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class DescribeInstanceRequestPrivate;

class QTAWSCONNECT_EXPORT DescribeInstanceRequest : public ConnectRequest {

public:
    DescribeInstanceRequest(const DescribeInstanceRequest &other);
    DescribeInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstanceRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
