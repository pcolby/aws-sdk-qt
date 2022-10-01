// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOARESPONSE_H
#define QTAWS_DESCRIBELOARESPONSE_H

#include "directconnectresponse.h"
#include "describeloarequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeLoaResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT DescribeLoaResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    DescribeLoaResponse(const DescribeLoaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLoaRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLoaResponse)
    Q_DISABLE_COPY(DescribeLoaResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
