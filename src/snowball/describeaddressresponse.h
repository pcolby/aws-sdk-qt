// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEADDRESSRESPONSE_H
#define QTAWS_DESCRIBEADDRESSRESPONSE_H

#include "snowballresponse.h"
#include "describeaddressrequest.h"

namespace QtAws {
namespace Snowball {

class DescribeAddressResponsePrivate;

class QTAWSSNOWBALL_EXPORT DescribeAddressResponse : public SnowballResponse {
    Q_OBJECT

public:
    DescribeAddressResponse(const DescribeAddressRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAddressRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAddressResponse)
    Q_DISABLE_COPY(DescribeAddressResponse)

};

} // namespace Snowball
} // namespace QtAws

#endif
