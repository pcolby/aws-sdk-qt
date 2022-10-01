// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERPARAMETERGROUPSREQUEST_H
#define QTAWS_DESCRIBEDBCLUSTERPARAMETERGROUPSREQUEST_H

#include "docdbrequest.h"

namespace QtAws {
namespace DocDb {

class DescribeDBClusterParameterGroupsRequestPrivate;

class QTAWSDOCDB_EXPORT DescribeDBClusterParameterGroupsRequest : public DocDbRequest {

public:
    DescribeDBClusterParameterGroupsRequest(const DescribeDBClusterParameterGroupsRequest &other);
    DescribeDBClusterParameterGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBClusterParameterGroupsRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
