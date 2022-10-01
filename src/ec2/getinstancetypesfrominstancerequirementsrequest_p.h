// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCETYPESFROMINSTANCEREQUIREMENTSREQUEST_P_H
#define QTAWS_GETINSTANCETYPESFROMINSTANCEREQUIREMENTSREQUEST_P_H

#include "ec2request_p.h"
#include "getinstancetypesfrominstancerequirementsrequest.h"

namespace QtAws {
namespace Ec2 {

class GetInstanceTypesFromInstanceRequirementsRequest;

class GetInstanceTypesFromInstanceRequirementsRequestPrivate : public Ec2RequestPrivate {

public:
    GetInstanceTypesFromInstanceRequirementsRequestPrivate(const Ec2Request::Action action,
                                   GetInstanceTypesFromInstanceRequirementsRequest * const q);
    GetInstanceTypesFromInstanceRequirementsRequestPrivate(const GetInstanceTypesFromInstanceRequirementsRequestPrivate &other,
                                   GetInstanceTypesFromInstanceRequirementsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInstanceTypesFromInstanceRequirementsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
