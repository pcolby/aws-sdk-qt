// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERHIERARCHYGROUPREQUEST_H
#define QTAWS_DESCRIBEUSERHIERARCHYGROUPREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class DescribeUserHierarchyGroupRequestPrivate;

class QTAWSCONNECT_EXPORT DescribeUserHierarchyGroupRequest : public ConnectRequest {

public:
    DescribeUserHierarchyGroupRequest(const DescribeUserHierarchyGroupRequest &other);
    DescribeUserHierarchyGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUserHierarchyGroupRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
