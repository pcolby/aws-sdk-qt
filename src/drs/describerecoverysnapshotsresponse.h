// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECOVERYSNAPSHOTSRESPONSE_H
#define QTAWS_DESCRIBERECOVERYSNAPSHOTSRESPONSE_H

#include "drsresponse.h"
#include "describerecoverysnapshotsrequest.h"

namespace QtAws {
namespace Drs {

class DescribeRecoverySnapshotsResponsePrivate;

class QTAWSDRS_EXPORT DescribeRecoverySnapshotsResponse : public DrsResponse {
    Q_OBJECT

public:
    DescribeRecoverySnapshotsResponse(const DescribeRecoverySnapshotsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRecoverySnapshotsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRecoverySnapshotsResponse)
    Q_DISABLE_COPY(DescribeRecoverySnapshotsResponse)

};

} // namespace Drs
} // namespace QtAws

#endif
