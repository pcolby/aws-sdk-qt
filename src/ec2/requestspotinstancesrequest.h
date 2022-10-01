// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REQUESTSPOTINSTANCESREQUEST_H
#define QTAWS_REQUESTSPOTINSTANCESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class RequestSpotInstancesRequestPrivate;

class QTAWSEC2_EXPORT RequestSpotInstancesRequest : public Ec2Request {

public:
    RequestSpotInstancesRequest(const RequestSpotInstancesRequest &other);
    RequestSpotInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RequestSpotInstancesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
