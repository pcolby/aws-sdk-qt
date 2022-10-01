// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPOTFLEETREQUESTHISTORYREQUEST_H
#define QTAWS_DESCRIBESPOTFLEETREQUESTHISTORYREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeSpotFleetRequestHistoryRequestPrivate;

class QTAWSEC2_EXPORT DescribeSpotFleetRequestHistoryRequest : public Ec2Request {

public:
    DescribeSpotFleetRequestHistoryRequest(const DescribeSpotFleetRequestHistoryRequest &other);
    DescribeSpotFleetRequestHistoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSpotFleetRequestHistoryRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
