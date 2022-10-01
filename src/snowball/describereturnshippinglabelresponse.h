// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERETURNSHIPPINGLABELRESPONSE_H
#define QTAWS_DESCRIBERETURNSHIPPINGLABELRESPONSE_H

#include "snowballresponse.h"
#include "describereturnshippinglabelrequest.h"

namespace QtAws {
namespace Snowball {

class DescribeReturnShippingLabelResponsePrivate;

class QTAWSSNOWBALL_EXPORT DescribeReturnShippingLabelResponse : public SnowballResponse {
    Q_OBJECT

public:
    DescribeReturnShippingLabelResponse(const DescribeReturnShippingLabelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeReturnShippingLabelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReturnShippingLabelResponse)
    Q_DISABLE_COPY(DescribeReturnShippingLabelResponse)

};

} // namespace Snowball
} // namespace QtAws

#endif
