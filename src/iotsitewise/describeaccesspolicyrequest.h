// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCESSPOLICYREQUEST_H
#define QTAWS_DESCRIBEACCESSPOLICYREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeAccessPolicyRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT DescribeAccessPolicyRequest : public IoTSiteWiseRequest {

public:
    DescribeAccessPolicyRequest(const DescribeAccessPolicyRequest &other);
    DescribeAccessPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccessPolicyRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
