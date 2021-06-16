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

#ifndef QTAWS_UPDATERESOURCEREQUEST_P_H
#define QTAWS_UPDATERESOURCEREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "updateresourcerequest.h"

namespace QtAws {
namespace LakeFormation {

class UpdateResourceRequest;

class QTAWS_EXPORT UpdateResourceRequestPrivate : public LakeFormationRequestPrivate {

public:
    UpdateResourceRequestPrivate(const LakeFormationRequest::Action action,
                                   UpdateResourceRequest * const q);
    UpdateResourceRequestPrivate(const UpdateResourceRequestPrivate &other,
                                   UpdateResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateResourceRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
