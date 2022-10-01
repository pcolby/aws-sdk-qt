// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMOVINGADDRESSESRESPONSE_H
#define QTAWS_DESCRIBEMOVINGADDRESSESRESPONSE_H

#include "ec2response.h"
#include "describemovingaddressesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeMovingAddressesResponsePrivate;

class QTAWSEC2_EXPORT DescribeMovingAddressesResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeMovingAddressesResponse(const DescribeMovingAddressesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeMovingAddressesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMovingAddressesResponse)
    Q_DISABLE_COPY(DescribeMovingAddressesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
