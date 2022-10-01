// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGENTVERSIONSREQUEST_H
#define QTAWS_DESCRIBEAGENTVERSIONSREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeAgentVersionsRequestPrivate;

class QTAWSOPSWORKS_EXPORT DescribeAgentVersionsRequest : public OpsWorksRequest {

public:
    DescribeAgentVersionsRequest(const DescribeAgentVersionsRequest &other);
    DescribeAgentVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAgentVersionsRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
