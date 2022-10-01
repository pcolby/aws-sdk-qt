// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPORTTASKSRESPONSE_H
#define QTAWS_DESCRIBEEXPORTTASKSRESPONSE_H

#include "applicationdiscoveryresponse.h"
#include "describeexporttasksrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class DescribeExportTasksResponsePrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT DescribeExportTasksResponse : public ApplicationDiscoveryResponse {
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

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
