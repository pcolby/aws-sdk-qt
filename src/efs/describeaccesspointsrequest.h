// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCESSPOINTSREQUEST_H
#define QTAWS_DESCRIBEACCESSPOINTSREQUEST_H

#include "efsrequest.h"

namespace QtAws {
namespace Efs {

class DescribeAccessPointsRequestPrivate;

class QTAWSEFS_EXPORT DescribeAccessPointsRequest : public EfsRequest {

public:
    DescribeAccessPointsRequest(const DescribeAccessPointsRequest &other);
    DescribeAccessPointsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccessPointsRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
