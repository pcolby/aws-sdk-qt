// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERHIERARCHYSTRUCTUREREQUEST_H
#define QTAWS_DESCRIBEUSERHIERARCHYSTRUCTUREREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class DescribeUserHierarchyStructureRequestPrivate;

class QTAWSCONNECT_EXPORT DescribeUserHierarchyStructureRequest : public ConnectRequest {

public:
    DescribeUserHierarchyStructureRequest(const DescribeUserHierarchyStructureRequest &other);
    DescribeUserHierarchyStructureRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUserHierarchyStructureRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
