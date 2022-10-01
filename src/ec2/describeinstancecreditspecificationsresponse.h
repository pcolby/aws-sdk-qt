// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCECREDITSPECIFICATIONSRESPONSE_H
#define QTAWS_DESCRIBEINSTANCECREDITSPECIFICATIONSRESPONSE_H

#include "ec2response.h"
#include "describeinstancecreditspecificationsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeInstanceCreditSpecificationsResponsePrivate;

class QTAWSEC2_EXPORT DescribeInstanceCreditSpecificationsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeInstanceCreditSpecificationsResponse(const DescribeInstanceCreditSpecificationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInstanceCreditSpecificationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstanceCreditSpecificationsResponse)
    Q_DISABLE_COPY(DescribeInstanceCreditSpecificationsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
