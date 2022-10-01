// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEQUERYREQUEST_H
#define QTAWS_DESCRIBEQUERYREQUEST_H

#include "cloudtrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class DescribeQueryRequestPrivate;

class QTAWSCLOUDTRAIL_EXPORT DescribeQueryRequest : public CloudTrailRequest {

public:
    DescribeQueryRequest(const DescribeQueryRequest &other);
    DescribeQueryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeQueryRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
