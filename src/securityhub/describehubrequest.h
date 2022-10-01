// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHUBREQUEST_H
#define QTAWS_DESCRIBEHUBREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class DescribeHubRequestPrivate;

class QTAWSSECURITYHUB_EXPORT DescribeHubRequest : public SecurityHubRequest {

public:
    DescribeHubRequest(const DescribeHubRequest &other);
    DescribeHubRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHubRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
