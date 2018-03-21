/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CREATEACTIVITYREQUEST_P_H
#define QTAWS_CREATEACTIVITYREQUEST_P_H

#include "sfn_p.h"
#include "createactivityrequest.h"

namespace AWS {

namespace SFN {

class CreateActivityRequest;

class QTAWS_EXPORT CreateActivityRequestPrivate : public SFNPrivate {

public:
    CreateActivityRequestPrivate(const SFN::Action action,
                                   CreateActivityRequest * const q);
    CreateActivityRequestPrivate(const CreateActivityRequestPrivate &other,
                                   CreateActivityRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateActivityRequest)

};

} // namespace SFN
} // namespace AWS

#endif
