// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATAREPOSITORYTASKSRESPONSE_H
#define QTAWS_DESCRIBEDATAREPOSITORYTASKSRESPONSE_H

#include "fsxresponse.h"
#include "describedatarepositorytasksrequest.h"

namespace QtAws {
namespace FSx {

class DescribeDataRepositoryTasksResponsePrivate;

class QTAWSFSX_EXPORT DescribeDataRepositoryTasksResponse : public FSxResponse {
    Q_OBJECT

public:
    DescribeDataRepositoryTasksResponse(const DescribeDataRepositoryTasksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDataRepositoryTasksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDataRepositoryTasksResponse)
    Q_DISABLE_COPY(DescribeDataRepositoryTasksResponse)

};

} // namespace FSx
} // namespace QtAws

#endif
