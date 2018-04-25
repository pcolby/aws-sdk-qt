/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_REGISTERSCALABLETARGETREQUEST_P_H
#define QTAWS_REGISTERSCALABLETARGETREQUEST_P_H

#include "applicationautoscalingrequest_p.h"
#include "registerscalabletargetrequest.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class RegisterScalableTargetRequest;

class QTAWS_EXPORT RegisterScalableTargetRequestPrivate : public ApplicationAutoScalingRequestPrivate {

public:
    RegisterScalableTargetRequestPrivate(const ApplicationAutoScalingRequest::Action action,
                                   RegisterScalableTargetRequest * const q);
    RegisterScalableTargetRequestPrivate(const RegisterScalableTargetRequestPrivate &other,
                                   RegisterScalableTargetRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterScalableTargetRequest)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
