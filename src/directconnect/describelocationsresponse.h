// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONSRESPONSE_H
#define QTAWS_DESCRIBELOCATIONSRESPONSE_H

#include "directconnectresponse.h"
#include "describelocationsrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeLocationsResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT DescribeLocationsResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    DescribeLocationsResponse(const DescribeLocationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLocationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocationsResponse)
    Q_DISABLE_COPY(DescribeLocationsResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
