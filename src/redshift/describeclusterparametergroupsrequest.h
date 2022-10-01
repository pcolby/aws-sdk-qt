// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERPARAMETERGROUPSREQUEST_H
#define QTAWS_DESCRIBECLUSTERPARAMETERGROUPSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeClusterParameterGroupsRequestPrivate;

class QTAWSREDSHIFT_EXPORT DescribeClusterParameterGroupsRequest : public RedshiftRequest {

public:
    DescribeClusterParameterGroupsRequest(const DescribeClusterParameterGroupsRequest &other);
    DescribeClusterParameterGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClusterParameterGroupsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
