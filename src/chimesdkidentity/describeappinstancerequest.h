// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPINSTANCEREQUEST_H
#define QTAWS_DESCRIBEAPPINSTANCEREQUEST_H

#include "chimesdkidentityrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class DescribeAppInstanceRequestPrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT DescribeAppInstanceRequest : public ChimeSdkIdentityRequest {

public:
    DescribeAppInstanceRequest(const DescribeAppInstanceRequest &other);
    DescribeAppInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAppInstanceRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
