// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRUNKINTERFACEASSOCIATIONSREQUEST_P_H
#define QTAWS_DESCRIBETRUNKINTERFACEASSOCIATIONSREQUEST_P_H

#include "ec2request_p.h"
#include "describetrunkinterfaceassociationsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeTrunkInterfaceAssociationsRequest;

class DescribeTrunkInterfaceAssociationsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeTrunkInterfaceAssociationsRequestPrivate(const Ec2Request::Action action,
                                   DescribeTrunkInterfaceAssociationsRequest * const q);
    DescribeTrunkInterfaceAssociationsRequestPrivate(const DescribeTrunkInterfaceAssociationsRequestPrivate &other,
                                   DescribeTrunkInterfaceAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTrunkInterfaceAssociationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
