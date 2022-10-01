// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPORTIMAGETASKSRESPONSE_H
#define QTAWS_DESCRIBEEXPORTIMAGETASKSRESPONSE_H

#include "ec2response.h"
#include "describeexportimagetasksrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeExportImageTasksResponsePrivate;

class QTAWSEC2_EXPORT DescribeExportImageTasksResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeExportImageTasksResponse(const DescribeExportImageTasksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeExportImageTasksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeExportImageTasksResponse)
    Q_DISABLE_COPY(DescribeExportImageTasksResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
