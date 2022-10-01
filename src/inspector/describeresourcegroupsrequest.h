// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCEGROUPSREQUEST_H
#define QTAWS_DESCRIBERESOURCEGROUPSREQUEST_H

#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class DescribeResourceGroupsRequestPrivate;

class QTAWSINSPECTOR_EXPORT DescribeResourceGroupsRequest : public InspectorRequest {

public:
    DescribeResourceGroupsRequest(const DescribeResourceGroupsRequest &other);
    DescribeResourceGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeResourceGroupsRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
