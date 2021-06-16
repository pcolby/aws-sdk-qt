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

#ifndef QTAWS_CREATESTUDIOREQUEST_P_H
#define QTAWS_CREATESTUDIOREQUEST_P_H

#include "nimblestudiorequest_p.h"
#include "createstudiorequest.h"

namespace QtAws {
namespace NimbleStudio {

class CreateStudioRequest;

class QTAWS_EXPORT CreateStudioRequestPrivate : public NimbleStudioRequestPrivate {

public:
    CreateStudioRequestPrivate(const NimbleStudioRequest::Action action,
                                   CreateStudioRequest * const q);
    CreateStudioRequestPrivate(const CreateStudioRequestPrivate &other,
                                   CreateStudioRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateStudioRequest)

};

} // namespace NimbleStudio
} // namespace QtAws

#endif
