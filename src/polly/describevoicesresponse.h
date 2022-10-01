// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVOICESRESPONSE_H
#define QTAWS_DESCRIBEVOICESRESPONSE_H

#include "pollyresponse.h"
#include "describevoicesrequest.h"

namespace QtAws {
namespace Polly {

class DescribeVoicesResponsePrivate;

class QTAWSPOLLY_EXPORT DescribeVoicesResponse : public PollyResponse {
    Q_OBJECT

public:
    DescribeVoicesResponse(const DescribeVoicesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVoicesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVoicesResponse)
    Q_DISABLE_COPY(DescribeVoicesResponse)

};

} // namespace Polly
} // namespace QtAws

#endif
