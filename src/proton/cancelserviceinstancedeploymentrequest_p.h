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

#ifndef QTAWS_CANCELSERVICEINSTANCEDEPLOYMENTREQUEST_P_H
#define QTAWS_CANCELSERVICEINSTANCEDEPLOYMENTREQUEST_P_H

#include "protonrequest_p.h"
#include "cancelserviceinstancedeploymentrequest.h"

namespace QtAws {
namespace Proton {

class CancelServiceInstanceDeploymentRequest;

class QTAWS_EXPORT CancelServiceInstanceDeploymentRequestPrivate : public ProtonRequestPrivate {

public:
    CancelServiceInstanceDeploymentRequestPrivate(const ProtonRequest::Action action,
                                   CancelServiceInstanceDeploymentRequest * const q);
    CancelServiceInstanceDeploymentRequestPrivate(const CancelServiceInstanceDeploymentRequestPrivate &other,
                                   CancelServiceInstanceDeploymentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelServiceInstanceDeploymentRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
