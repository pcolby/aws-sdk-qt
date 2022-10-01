// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTANDARDSREQUEST_H
#define QTAWS_DESCRIBESTANDARDSREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class DescribeStandardsRequestPrivate;

class QTAWSSECURITYHUB_EXPORT DescribeStandardsRequest : public SecurityHubRequest {

public:
    DescribeStandardsRequest(const DescribeStandardsRequest &other);
    DescribeStandardsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStandardsRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
