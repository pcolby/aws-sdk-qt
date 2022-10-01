// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOFFERINGRESPONSE_H
#define QTAWS_DESCRIBEOFFERINGRESPONSE_H

#include "mediaconnectresponse.h"
#include "describeofferingrequest.h"

namespace QtAws {
namespace MediaConnect {

class DescribeOfferingResponsePrivate;

class QTAWSMEDIACONNECT_EXPORT DescribeOfferingResponse : public MediaConnectResponse {
    Q_OBJECT

public:
    DescribeOfferingResponse(const DescribeOfferingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeOfferingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOfferingResponse)
    Q_DISABLE_COPY(DescribeOfferingResponse)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
