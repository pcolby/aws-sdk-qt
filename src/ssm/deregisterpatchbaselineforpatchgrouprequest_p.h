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

#ifndef QTAWS_DEREGISTERPATCHBASELINEFORPATCHGROUPREQUEST_P_H
#define QTAWS_DEREGISTERPATCHBASELINEFORPATCHGROUPREQUEST_P_H

#include "ssmrequest_p.h"
#include "deregisterpatchbaselineforpatchgrouprequest.h"

namespace QtAws {
namespace SSM {

class DeregisterPatchBaselineForPatchGroupRequest;

class QTAWS_EXPORT DeregisterPatchBaselineForPatchGroupRequestPrivate : public SsmRequestPrivate {

public:
    DeregisterPatchBaselineForPatchGroupRequestPrivate(const SsmRequest::Action action,
                                   DeregisterPatchBaselineForPatchGroupRequest * const q);
    DeregisterPatchBaselineForPatchGroupRequestPrivate(const DeregisterPatchBaselineForPatchGroupRequestPrivate &other,
                                   DeregisterPatchBaselineForPatchGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterPatchBaselineForPatchGroupRequest)

};

} // namespace SSM
} // namespace QtAws

#endif
