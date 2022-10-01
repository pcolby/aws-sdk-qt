// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPINSTANCEUSERREQUEST_H
#define QTAWS_DESCRIBEAPPINSTANCEUSERREQUEST_H

#include "chimesdkidentityrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class DescribeAppInstanceUserRequestPrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT DescribeAppInstanceUserRequest : public ChimeSdkIdentityRequest {

public:
    DescribeAppInstanceUserRequest(const DescribeAppInstanceUserRequest &other);
    DescribeAppInstanceUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAppInstanceUserRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
