// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIPGROUPSREQUEST_H
#define QTAWS_DESCRIBEIPGROUPSREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeIpGroupsRequestPrivate;

class QTAWSWORKSPACES_EXPORT DescribeIpGroupsRequest : public WorkSpacesRequest {

public:
    DescribeIpGroupsRequest(const DescribeIpGroupsRequest &other);
    DescribeIpGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIpGroupsRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
