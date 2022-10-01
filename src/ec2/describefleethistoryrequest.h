// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETHISTORYREQUEST_H
#define QTAWS_DESCRIBEFLEETHISTORYREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeFleetHistoryRequestPrivate;

class QTAWSEC2_EXPORT DescribeFleetHistoryRequest : public Ec2Request {

public:
    DescribeFleetHistoryRequest(const DescribeFleetHistoryRequest &other);
    DescribeFleetHistoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetHistoryRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
