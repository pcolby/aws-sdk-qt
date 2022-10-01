// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELRESERVEDINSTANCESLISTINGREQUEST_H
#define QTAWS_CANCELRESERVEDINSTANCESLISTINGREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CancelReservedInstancesListingRequestPrivate;

class QTAWSEC2_EXPORT CancelReservedInstancesListingRequest : public Ec2Request {

public:
    CancelReservedInstancesListingRequest(const CancelReservedInstancesListingRequest &other);
    CancelReservedInstancesListingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelReservedInstancesListingRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
