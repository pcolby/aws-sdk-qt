// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERHIERARCHYGROUPRESPONSE_H
#define QTAWS_DESCRIBEUSERHIERARCHYGROUPRESPONSE_H

#include "connectresponse.h"
#include "describeuserhierarchygrouprequest.h"

namespace QtAws {
namespace Connect {

class DescribeUserHierarchyGroupResponsePrivate;

class QTAWSCONNECT_EXPORT DescribeUserHierarchyGroupResponse : public ConnectResponse {
    Q_OBJECT

public:
    DescribeUserHierarchyGroupResponse(const DescribeUserHierarchyGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeUserHierarchyGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUserHierarchyGroupResponse)
    Q_DISABLE_COPY(DescribeUserHierarchyGroupResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
