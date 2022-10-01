// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROUTERCONFIGURATIONRESPONSE_H
#define QTAWS_DESCRIBEROUTERCONFIGURATIONRESPONSE_H

#include "directconnectresponse.h"
#include "describerouterconfigurationrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeRouterConfigurationResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT DescribeRouterConfigurationResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    DescribeRouterConfigurationResponse(const DescribeRouterConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRouterConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRouterConfigurationResponse)
    Q_DISABLE_COPY(DescribeRouterConfigurationResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
