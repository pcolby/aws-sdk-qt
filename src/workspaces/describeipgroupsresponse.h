// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIPGROUPSRESPONSE_H
#define QTAWS_DESCRIBEIPGROUPSRESPONSE_H

#include "workspacesresponse.h"
#include "describeipgroupsrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeIpGroupsResponsePrivate;

class QTAWSWORKSPACES_EXPORT DescribeIpGroupsResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    DescribeIpGroupsResponse(const DescribeIpGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeIpGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIpGroupsResponse)
    Q_DISABLE_COPY(DescribeIpGroupsResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
