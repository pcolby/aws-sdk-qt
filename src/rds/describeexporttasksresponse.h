// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPORTTASKSRESPONSE_H
#define QTAWS_DESCRIBEEXPORTTASKSRESPONSE_H

#include "rdsresponse.h"
#include "describeexporttasksrequest.h"

namespace QtAws {
namespace Rds {

class DescribeExportTasksResponsePrivate;

class QTAWSRDS_EXPORT DescribeExportTasksResponse : public RdsResponse {
    Q_OBJECT

public:
    DescribeExportTasksResponse(const DescribeExportTasksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeExportTasksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeExportTasksResponse)
    Q_DISABLE_COPY(DescribeExportTasksResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
