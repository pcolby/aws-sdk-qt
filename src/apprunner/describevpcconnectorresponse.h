// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCCONNECTORRESPONSE_H
#define QTAWS_DESCRIBEVPCCONNECTORRESPONSE_H

#include "apprunnerresponse.h"
#include "describevpcconnectorrequest.h"

namespace QtAws {
namespace AppRunner {

class DescribeVpcConnectorResponsePrivate;

class QTAWSAPPRUNNER_EXPORT DescribeVpcConnectorResponse : public AppRunnerResponse {
    Q_OBJECT

public:
    DescribeVpcConnectorResponse(const DescribeVpcConnectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVpcConnectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVpcConnectorResponse)
    Q_DISABLE_COPY(DescribeVpcConnectorResponse)

};

} // namespace AppRunner
} // namespace QtAws

#endif
