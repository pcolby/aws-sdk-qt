// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERSNAPSHOTSREQUEST_H
#define QTAWS_DESCRIBEDBCLUSTERSNAPSHOTSREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class DescribeDBClusterSnapshotsRequestPrivate;

class QTAWSNEPTUNE_EXPORT DescribeDBClusterSnapshotsRequest : public NeptuneRequest {

public:
    DescribeDBClusterSnapshotsRequest(const DescribeDBClusterSnapshotsRequest &other);
    DescribeDBClusterSnapshotsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBClusterSnapshotsRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
