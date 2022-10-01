// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPINSTANCEADMINREQUEST_H
#define QTAWS_DESCRIBEAPPINSTANCEADMINREQUEST_H

#include "chimesdkidentityrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class DescribeAppInstanceAdminRequestPrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT DescribeAppInstanceAdminRequest : public ChimeSdkIdentityRequest {

public:
    DescribeAppInstanceAdminRequest(const DescribeAppInstanceAdminRequest &other);
    DescribeAppInstanceAdminRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAppInstanceAdminRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
