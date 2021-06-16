/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_REMOVEMANAGEDSCALINGPOLICYREQUEST_P_H
#define QTAWS_REMOVEMANAGEDSCALINGPOLICYREQUEST_P_H

#include "emrrequest_p.h"
#include "removemanagedscalingpolicyrequest.h"

namespace QtAws {
namespace EMR {

class RemoveManagedScalingPolicyRequest;

class QTAWS_EXPORT RemoveManagedScalingPolicyRequestPrivate : public EmrRequestPrivate {

public:
    RemoveManagedScalingPolicyRequestPrivate(const EmrRequest::Action action,
                                   RemoveManagedScalingPolicyRequest * const q);
    RemoveManagedScalingPolicyRequestPrivate(const RemoveManagedScalingPolicyRequestPrivate &other,
                                   RemoveManagedScalingPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveManagedScalingPolicyRequest)

};

} // namespace EMR
} // namespace QtAws

#endif
