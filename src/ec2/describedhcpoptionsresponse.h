// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDHCPOPTIONSRESPONSE_H
#define QTAWS_DESCRIBEDHCPOPTIONSRESPONSE_H

#include "ec2response.h"
#include "describedhcpoptionsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeDhcpOptionsResponsePrivate;

class QTAWSEC2_EXPORT DescribeDhcpOptionsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeDhcpOptionsResponse(const DescribeDhcpOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDhcpOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDhcpOptionsResponse)
    Q_DISABLE_COPY(DescribeDhcpOptionsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
