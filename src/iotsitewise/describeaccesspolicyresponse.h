// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCESSPOLICYRESPONSE_H
#define QTAWS_DESCRIBEACCESSPOLICYRESPONSE_H

#include "iotsitewiseresponse.h"
#include "describeaccesspolicyrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeAccessPolicyResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT DescribeAccessPolicyResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    DescribeAccessPolicyResponse(const DescribeAccessPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAccessPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccessPolicyResponse)
    Q_DISABLE_COPY(DescribeAccessPolicyResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
