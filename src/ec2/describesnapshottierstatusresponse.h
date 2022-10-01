// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNAPSHOTTIERSTATUSRESPONSE_H
#define QTAWS_DESCRIBESNAPSHOTTIERSTATUSRESPONSE_H

#include "ec2response.h"
#include "describesnapshottierstatusrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeSnapshotTierStatusResponsePrivate;

class QTAWSEC2_EXPORT DescribeSnapshotTierStatusResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeSnapshotTierStatusResponse(const DescribeSnapshotTierStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSnapshotTierStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSnapshotTierStatusResponse)
    Q_DISABLE_COPY(DescribeSnapshotTierStatusResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
