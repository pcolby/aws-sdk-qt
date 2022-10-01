// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPLACEMENTGROUPSREQUEST_H
#define QTAWS_DESCRIBEPLACEMENTGROUPSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribePlacementGroupsRequestPrivate;

class QTAWSEC2_EXPORT DescribePlacementGroupsRequest : public Ec2Request {

public:
    DescribePlacementGroupsRequest(const DescribePlacementGroupsRequest &other);
    DescribePlacementGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePlacementGroupsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
