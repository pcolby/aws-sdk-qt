// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECOVERYSNAPSHOTSREQUEST_H
#define QTAWS_DESCRIBERECOVERYSNAPSHOTSREQUEST_H

#include "drsrequest.h"

namespace QtAws {
namespace Drs {

class DescribeRecoverySnapshotsRequestPrivate;

class QTAWSDRS_EXPORT DescribeRecoverySnapshotsRequest : public DrsRequest {

public:
    DescribeRecoverySnapshotsRequest(const DescribeRecoverySnapshotsRequest &other);
    DescribeRecoverySnapshotsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRecoverySnapshotsRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
