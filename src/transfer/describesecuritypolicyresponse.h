// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESECURITYPOLICYRESPONSE_H
#define QTAWS_DESCRIBESECURITYPOLICYRESPONSE_H

#include "transferresponse.h"
#include "describesecuritypolicyrequest.h"

namespace QtAws {
namespace Transfer {

class DescribeSecurityPolicyResponsePrivate;

class QTAWSTRANSFER_EXPORT DescribeSecurityPolicyResponse : public TransferResponse {
    Q_OBJECT

public:
    DescribeSecurityPolicyResponse(const DescribeSecurityPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSecurityPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSecurityPolicyResponse)
    Q_DISABLE_COPY(DescribeSecurityPolicyResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
