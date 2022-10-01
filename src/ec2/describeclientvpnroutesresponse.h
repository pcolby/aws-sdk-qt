// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTVPNROUTESRESPONSE_H
#define QTAWS_DESCRIBECLIENTVPNROUTESRESPONSE_H

#include "ec2response.h"
#include "describeclientvpnroutesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeClientVpnRoutesResponsePrivate;

class QTAWSEC2_EXPORT DescribeClientVpnRoutesResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeClientVpnRoutesResponse(const DescribeClientVpnRoutesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeClientVpnRoutesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClientVpnRoutesResponse)
    Q_DISABLE_COPY(DescribeClientVpnRoutesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
