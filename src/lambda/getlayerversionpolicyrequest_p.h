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

#ifndef QTAWS_GETLAYERVERSIONPOLICYREQUEST_P_H
#define QTAWS_GETLAYERVERSIONPOLICYREQUEST_P_H

#include "lambdarequest_p.h"
#include "getlayerversionpolicyrequest.h"

namespace QtAws {
namespace Lambda {

class GetLayerVersionPolicyRequest;

class GetLayerVersionPolicyRequestPrivate : public LambdaRequestPrivate {

public:
    GetLayerVersionPolicyRequestPrivate(const LambdaRequest::Action action,
                                   GetLayerVersionPolicyRequest * const q);
    GetLayerVersionPolicyRequestPrivate(const GetLayerVersionPolicyRequestPrivate &other,
                                   GetLayerVersionPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLayerVersionPolicyRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
