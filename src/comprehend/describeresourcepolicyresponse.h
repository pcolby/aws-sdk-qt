// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCEPOLICYRESPONSE_H
#define QTAWS_DESCRIBERESOURCEPOLICYRESPONSE_H

#include "comprehendresponse.h"
#include "describeresourcepolicyrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeResourcePolicyResponsePrivate;

class QTAWSCOMPREHEND_EXPORT DescribeResourcePolicyResponse : public ComprehendResponse {
    Q_OBJECT

public:
    DescribeResourcePolicyResponse(const DescribeResourcePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeResourcePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeResourcePolicyResponse)
    Q_DISABLE_COPY(DescribeResourcePolicyResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
