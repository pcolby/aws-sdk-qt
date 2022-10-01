// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCEPOLICYREQUEST_H
#define QTAWS_DESCRIBERESOURCEPOLICYREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeResourcePolicyRequestPrivate;

class QTAWSCOMPREHEND_EXPORT DescribeResourcePolicyRequest : public ComprehendRequest {

public:
    DescribeResourcePolicyRequest(const DescribeResourcePolicyRequest &other);
    DescribeResourcePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeResourcePolicyRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
