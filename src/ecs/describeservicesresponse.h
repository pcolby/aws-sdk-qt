// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICESRESPONSE_H
#define QTAWS_DESCRIBESERVICESRESPONSE_H

#include "ecsresponse.h"
#include "describeservicesrequest.h"

namespace QtAws {
namespace Ecs {

class DescribeServicesResponsePrivate;

class QTAWSECS_EXPORT DescribeServicesResponse : public EcsResponse {
    Q_OBJECT

public:
    DescribeServicesResponse(const DescribeServicesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeServicesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeServicesResponse)
    Q_DISABLE_COPY(DescribeServicesResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
