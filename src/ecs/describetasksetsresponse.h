// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETASKSETSRESPONSE_H
#define QTAWS_DESCRIBETASKSETSRESPONSE_H

#include "ecsresponse.h"
#include "describetasksetsrequest.h"

namespace QtAws {
namespace Ecs {

class DescribeTaskSetsResponsePrivate;

class QTAWSECS_EXPORT DescribeTaskSetsResponse : public EcsResponse {
    Q_OBJECT

public:
    DescribeTaskSetsResponse(const DescribeTaskSetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTaskSetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTaskSetsResponse)
    Q_DISABLE_COPY(DescribeTaskSetsResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
