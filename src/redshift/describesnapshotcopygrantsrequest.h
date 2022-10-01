// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNAPSHOTCOPYGRANTSREQUEST_H
#define QTAWS_DESCRIBESNAPSHOTCOPYGRANTSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeSnapshotCopyGrantsRequestPrivate;

class QTAWSREDSHIFT_EXPORT DescribeSnapshotCopyGrantsRequest : public RedshiftRequest {

public:
    DescribeSnapshotCopyGrantsRequest(const DescribeSnapshotCopyGrantsRequest &other);
    DescribeSnapshotCopyGrantsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSnapshotCopyGrantsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
