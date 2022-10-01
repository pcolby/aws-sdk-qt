// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESILIENCYPOLICYREQUEST_H
#define QTAWS_DESCRIBERESILIENCYPOLICYREQUEST_H

#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class DescribeResiliencyPolicyRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT DescribeResiliencyPolicyRequest : public ResilienceHubRequest {

public:
    DescribeResiliencyPolicyRequest(const DescribeResiliencyPolicyRequest &other);
    DescribeResiliencyPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeResiliencyPolicyRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
