// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACTIONTARGETSREQUEST_H
#define QTAWS_DESCRIBEACTIONTARGETSREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class DescribeActionTargetsRequestPrivate;

class QTAWSSECURITYHUB_EXPORT DescribeActionTargetsRequest : public SecurityHubRequest {

public:
    DescribeActionTargetsRequest(const DescribeActionTargetsRequest &other);
    DescribeActionTargetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeActionTargetsRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
