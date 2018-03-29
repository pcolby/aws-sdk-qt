/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_SETSUBNETSREQUEST_P_H
#define QTAWS_SETSUBNETSREQUEST_P_H

#include "elasticloadbalancingv2_p.h"
#include "setsubnetsrequest.h"

namespace AWS {

namespace ElasticLoadBalancingv2 {

class SetSubnetsRequest;

class QTAWS_EXPORT SetSubnetsRequestPrivate : public ElasticLoadBalancingv2Private {

public:
    SetSubnetsRequestPrivate(const ElasticLoadBalancingv2::Action action,
                                   SetSubnetsRequest * const q);
    SetSubnetsRequestPrivate(const SetSubnetsRequestPrivate &other,
                                   SetSubnetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetSubnetsRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace AWS

#endif
