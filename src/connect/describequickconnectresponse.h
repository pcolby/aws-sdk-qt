// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEQUICKCONNECTRESPONSE_H
#define QTAWS_DESCRIBEQUICKCONNECTRESPONSE_H

#include "connectresponse.h"
#include "describequickconnectrequest.h"

namespace QtAws {
namespace Connect {

class DescribeQuickConnectResponsePrivate;

class QTAWSCONNECT_EXPORT DescribeQuickConnectResponse : public ConnectResponse {
    Q_OBJECT

public:
    DescribeQuickConnectResponse(const DescribeQuickConnectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeQuickConnectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeQuickConnectResponse)
    Q_DISABLE_COPY(DescribeQuickConnectResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
