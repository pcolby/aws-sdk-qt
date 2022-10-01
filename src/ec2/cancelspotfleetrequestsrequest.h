// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSPOTFLEETREQUESTSREQUEST_H
#define QTAWS_CANCELSPOTFLEETREQUESTSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CancelSpotFleetRequestsRequestPrivate;

class QTAWSEC2_EXPORT CancelSpotFleetRequestsRequest : public Ec2Request {

public:
    CancelSpotFleetRequestsRequest(const CancelSpotFleetRequestsRequest &other);
    CancelSpotFleetRequestsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelSpotFleetRequestsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
