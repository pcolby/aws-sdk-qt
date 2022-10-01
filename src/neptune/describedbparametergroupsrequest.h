// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBPARAMETERGROUPSREQUEST_H
#define QTAWS_DESCRIBEDBPARAMETERGROUPSREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class DescribeDBParameterGroupsRequestPrivate;

class QTAWSNEPTUNE_EXPORT DescribeDBParameterGroupsRequest : public NeptuneRequest {

public:
    DescribeDBParameterGroupsRequest(const DescribeDBParameterGroupsRequest &other);
    DescribeDBParameterGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBParameterGroupsRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
