// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINTERCONNECTSRESPONSE_H
#define QTAWS_DESCRIBEINTERCONNECTSRESPONSE_H

#include "directconnectresponse.h"
#include "describeinterconnectsrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeInterconnectsResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT DescribeInterconnectsResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    DescribeInterconnectsResponse(const DescribeInterconnectsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInterconnectsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInterconnectsResponse)
    Q_DISABLE_COPY(DescribeInterconnectsResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
