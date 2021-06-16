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

#ifndef QTAWS_PAUSECLUSTERREQUEST_P_H
#define QTAWS_PAUSECLUSTERREQUEST_P_H

#include "redshiftrequest_p.h"
#include "pauseclusterrequest.h"

namespace QtAws {
namespace Redshift {

class PauseClusterRequest;

class QTAWS_EXPORT PauseClusterRequestPrivate : public RedshiftRequestPrivate {

public:
    PauseClusterRequestPrivate(const RedshiftRequest::Action action,
                                   PauseClusterRequest * const q);
    PauseClusterRequestPrivate(const PauseClusterRequestPrivate &other,
                                   PauseClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(PauseClusterRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
