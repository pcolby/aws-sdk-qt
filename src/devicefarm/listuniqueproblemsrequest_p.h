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

#ifndef QTAWS_LISTUNIQUEPROBLEMSREQUEST_P_H
#define QTAWS_LISTUNIQUEPROBLEMSREQUEST_P_H

#include "devicefarm_p.h"
#include "listuniqueproblemsrequest.h"

namespace AWS {

namespace DeviceFarm {

class ListUniqueProblemsRequest;

class QTAWS_EXPORT ListUniqueProblemsRequestPrivate : public DeviceFarmPrivate {

public:
    ListUniqueProblemsRequestPrivate(const DeviceFarm::Action action,
                                   ListUniqueProblemsRequest * const q);
    ListUniqueProblemsRequestPrivate(const ListUniqueProblemsRequestPrivate &other,
                                   ListUniqueProblemsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListUniqueProblemsRequest)

};

} // namespace DeviceFarm
} // namespace AWS

#endif
