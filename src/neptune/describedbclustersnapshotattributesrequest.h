// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERSNAPSHOTATTRIBUTESREQUEST_H
#define QTAWS_DESCRIBEDBCLUSTERSNAPSHOTATTRIBUTESREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class DescribeDBClusterSnapshotAttributesRequestPrivate;

class QTAWSNEPTUNE_EXPORT DescribeDBClusterSnapshotAttributesRequest : public NeptuneRequest {

public:
    DescribeDBClusterSnapshotAttributesRequest(const DescribeDBClusterSnapshotAttributesRequest &other);
    DescribeDBClusterSnapshotAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBClusterSnapshotAttributesRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
