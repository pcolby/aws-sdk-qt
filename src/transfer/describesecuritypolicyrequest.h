// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESECURITYPOLICYREQUEST_H
#define QTAWS_DESCRIBESECURITYPOLICYREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class DescribeSecurityPolicyRequestPrivate;

class QTAWSTRANSFER_EXPORT DescribeSecurityPolicyRequest : public TransferRequest {

public:
    DescribeSecurityPolicyRequest(const DescribeSecurityPolicyRequest &other);
    DescribeSecurityPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSecurityPolicyRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
