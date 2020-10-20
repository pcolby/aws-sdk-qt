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

#ifndef QTAWS_UPDATEFUNCTIONREQUEST_P_H
#define QTAWS_UPDATEFUNCTIONREQUEST_P_H

#include "appsyncrequest_p.h"
#include "updatefunctionrequest.h"

namespace QtAws {
namespace AppSync {

class UpdateFunctionRequest;

class QTAWS_EXPORT UpdateFunctionRequestPrivate : public AppSyncRequestPrivate {

public:
    UpdateFunctionRequestPrivate(const AppSyncRequest::Action action,
                                   UpdateFunctionRequest * const q);
    UpdateFunctionRequestPrivate(const UpdateFunctionRequestPrivate &other,
                                   UpdateFunctionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFunctionRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
