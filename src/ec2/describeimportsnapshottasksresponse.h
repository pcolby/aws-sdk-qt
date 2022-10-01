// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMPORTSNAPSHOTTASKSRESPONSE_H
#define QTAWS_DESCRIBEIMPORTSNAPSHOTTASKSRESPONSE_H

#include "ec2response.h"
#include "describeimportsnapshottasksrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeImportSnapshotTasksResponsePrivate;

class QTAWSEC2_EXPORT DescribeImportSnapshotTasksResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeImportSnapshotTasksResponse(const DescribeImportSnapshotTasksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeImportSnapshotTasksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeImportSnapshotTasksResponse)
    Q_DISABLE_COPY(DescribeImportSnapshotTasksResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
