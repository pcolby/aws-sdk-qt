// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERUNTIMECONFIGURATIONRESPONSE_H
#define QTAWS_DESCRIBERUNTIMECONFIGURATIONRESPONSE_H

#include "gameliftresponse.h"
#include "describeruntimeconfigurationrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeRuntimeConfigurationResponsePrivate;

class QTAWSGAMELIFT_EXPORT DescribeRuntimeConfigurationResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DescribeRuntimeConfigurationResponse(const DescribeRuntimeConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRuntimeConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRuntimeConfigurationResponse)
    Q_DISABLE_COPY(DescribeRuntimeConfigurationResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
