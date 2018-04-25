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

#ifndef QTAWS_UPDATETRIGGERREQUEST_P_H
#define QTAWS_UPDATETRIGGERREQUEST_P_H

#include "gluerequest_p.h"
#include "updatetriggerrequest.h"

namespace QtAws {
namespace Glue {

class UpdateTriggerRequest;

class QTAWS_EXPORT UpdateTriggerRequestPrivate : public GlueRequestPrivate {

public:
    UpdateTriggerRequestPrivate(const GlueRequest::Action action,
                                   UpdateTriggerRequest * const q);
    UpdateTriggerRequestPrivate(const UpdateTriggerRequestPrivate &other,
                                   UpdateTriggerRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTriggerRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
