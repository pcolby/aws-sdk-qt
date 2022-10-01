// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETASKSRESPONSE_H
#define QTAWS_DESCRIBETASKSRESPONSE_H

#include "ecsresponse.h"
#include "describetasksrequest.h"

namespace QtAws {
namespace Ecs {

class DescribeTasksResponsePrivate;

class QTAWSECS_EXPORT DescribeTasksResponse : public EcsResponse {
    Q_OBJECT

public:
    DescribeTasksResponse(const DescribeTasksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTasksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTasksResponse)
    Q_DISABLE_COPY(DescribeTasksResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
