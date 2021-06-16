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

#ifndef QTAWS_MODIFYENDPOINTACCESSREQUEST_P_H
#define QTAWS_MODIFYENDPOINTACCESSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "modifyendpointaccessrequest.h"

namespace QtAws {
namespace Redshift {

class ModifyEndpointAccessRequest;

class QTAWS_EXPORT ModifyEndpointAccessRequestPrivate : public RedshiftRequestPrivate {

public:
    ModifyEndpointAccessRequestPrivate(const RedshiftRequest::Action action,
                                   ModifyEndpointAccessRequest * const q);
    ModifyEndpointAccessRequestPrivate(const ModifyEndpointAccessRequestPrivate &other,
                                   ModifyEndpointAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyEndpointAccessRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
