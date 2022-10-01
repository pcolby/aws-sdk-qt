// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECAPACITYPROVIDERSRESPONSE_H
#define QTAWS_DESCRIBECAPACITYPROVIDERSRESPONSE_H

#include "ecsresponse.h"
#include "describecapacityprovidersrequest.h"

namespace QtAws {
namespace Ecs {

class DescribeCapacityProvidersResponsePrivate;

class QTAWSECS_EXPORT DescribeCapacityProvidersResponse : public EcsResponse {
    Q_OBJECT

public:
    DescribeCapacityProvidersResponse(const DescribeCapacityProvidersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCapacityProvidersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCapacityProvidersResponse)
    Q_DISABLE_COPY(DescribeCapacityProvidersResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
