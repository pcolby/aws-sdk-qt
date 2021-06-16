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

#ifndef QTAWS_GETFUNCTIONEVENTINVOKECONFIGREQUEST_P_H
#define QTAWS_GETFUNCTIONEVENTINVOKECONFIGREQUEST_P_H

#include "lambdarequest_p.h"
#include "getfunctioneventinvokeconfigrequest.h"

namespace QtAws {
namespace Lambda {

class GetFunctionEventInvokeConfigRequest;

class QTAWS_EXPORT GetFunctionEventInvokeConfigRequestPrivate : public LambdaRequestPrivate {

public:
    GetFunctionEventInvokeConfigRequestPrivate(const LambdaRequest::Action action,
                                   GetFunctionEventInvokeConfigRequest * const q);
    GetFunctionEventInvokeConfigRequestPrivate(const GetFunctionEventInvokeConfigRequestPrivate &other,
                                   GetFunctionEventInvokeConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFunctionEventInvokeConfigRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
