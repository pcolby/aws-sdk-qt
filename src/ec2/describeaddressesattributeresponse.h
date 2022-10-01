// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEADDRESSESATTRIBUTERESPONSE_H
#define QTAWS_DESCRIBEADDRESSESATTRIBUTERESPONSE_H

#include "ec2response.h"
#include "describeaddressesattributerequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeAddressesAttributeResponsePrivate;

class QTAWSEC2_EXPORT DescribeAddressesAttributeResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeAddressesAttributeResponse(const DescribeAddressesAttributeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAddressesAttributeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAddressesAttributeResponse)
    Q_DISABLE_COPY(DescribeAddressesAttributeResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
