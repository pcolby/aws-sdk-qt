// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPOTPRICEHISTORYRESPONSE_H
#define QTAWS_DESCRIBESPOTPRICEHISTORYRESPONSE_H

#include "ec2response.h"
#include "describespotpricehistoryrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeSpotPriceHistoryResponsePrivate;

class QTAWSEC2_EXPORT DescribeSpotPriceHistoryResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeSpotPriceHistoryResponse(const DescribeSpotPriceHistoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSpotPriceHistoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSpotPriceHistoryResponse)
    Q_DISABLE_COPY(DescribeSpotPriceHistoryResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
