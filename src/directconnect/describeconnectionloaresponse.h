// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTIONLOARESPONSE_H
#define QTAWS_DESCRIBECONNECTIONLOARESPONSE_H

#include "directconnectresponse.h"
#include "describeconnectionloarequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeConnectionLoaResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT DescribeConnectionLoaResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    DescribeConnectionLoaResponse(const DescribeConnectionLoaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConnectionLoaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConnectionLoaResponse)
    Q_DISABLE_COPY(DescribeConnectionLoaResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
