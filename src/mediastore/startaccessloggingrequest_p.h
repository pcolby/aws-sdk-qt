/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_STARTACCESSLOGGINGREQUEST_P_H
#define QTAWS_STARTACCESSLOGGINGREQUEST_P_H

#include "mediastorerequest_p.h"
#include "startaccessloggingrequest.h"

namespace QtAws {
namespace MediaStore {

class StartAccessLoggingRequest;

class QTAWS_EXPORT StartAccessLoggingRequestPrivate : public MediaStoreRequestPrivate {

public:
    StartAccessLoggingRequestPrivate(const MediaStoreRequest::Action action,
                                   StartAccessLoggingRequest * const q);
    StartAccessLoggingRequestPrivate(const StartAccessLoggingRequestPrivate &other,
                                   StartAccessLoggingRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartAccessLoggingRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
