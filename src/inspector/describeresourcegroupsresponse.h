// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCEGROUPSRESPONSE_H
#define QTAWS_DESCRIBERESOURCEGROUPSRESPONSE_H

#include "inspectorresponse.h"
#include "describeresourcegroupsrequest.h"

namespace QtAws {
namespace Inspector {

class DescribeResourceGroupsResponsePrivate;

class QTAWSINSPECTOR_EXPORT DescribeResourceGroupsResponse : public InspectorResponse {
    Q_OBJECT

public:
    DescribeResourceGroupsResponse(const DescribeResourceGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeResourceGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeResourceGroupsResponse)
    Q_DISABLE_COPY(DescribeResourceGroupsResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif
