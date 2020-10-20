/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_REGISTERONPREMISESINSTANCEREQUEST_P_H
#define QTAWS_REGISTERONPREMISESINSTANCEREQUEST_P_H

#include "codedeployrequest_p.h"
#include "registeronpremisesinstancerequest.h"

namespace QtAws {
namespace CodeDeploy {

class RegisterOnPremisesInstanceRequest;

class QTAWS_EXPORT RegisterOnPremisesInstanceRequestPrivate : public CodeDeployRequestPrivate {

public:
    RegisterOnPremisesInstanceRequestPrivate(const CodeDeployRequest::Action action,
                                   RegisterOnPremisesInstanceRequest * const q);
    RegisterOnPremisesInstanceRequestPrivate(const RegisterOnPremisesInstanceRequestPrivate &other,
                                   RegisterOnPremisesInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterOnPremisesInstanceRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
