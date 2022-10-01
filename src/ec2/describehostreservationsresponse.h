// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHOSTRESERVATIONSRESPONSE_H
#define QTAWS_DESCRIBEHOSTRESERVATIONSRESPONSE_H

#include "ec2response.h"
#include "describehostreservationsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeHostReservationsResponsePrivate;

class QTAWSEC2_EXPORT DescribeHostReservationsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeHostReservationsResponse(const DescribeHostReservationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeHostReservationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHostReservationsResponse)
    Q_DISABLE_COPY(DescribeHostReservationsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
