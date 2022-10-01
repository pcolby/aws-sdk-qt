// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRAILSREQUEST_H
#define QTAWS_DESCRIBETRAILSREQUEST_H

#include "cloudtrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class DescribeTrailsRequestPrivate;

class QTAWSCLOUDTRAIL_EXPORT DescribeTrailsRequest : public CloudTrailRequest {

public:
    DescribeTrailsRequest(const DescribeTrailsRequest &other);
    DescribeTrailsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTrailsRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
