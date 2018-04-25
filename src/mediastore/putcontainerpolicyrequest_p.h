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

#ifndef QTAWS_PUTCONTAINERPOLICYREQUEST_P_H
#define QTAWS_PUTCONTAINERPOLICYREQUEST_P_H

#include "mediastorerequest_p.h"
#include "putcontainerpolicyrequest.h"

namespace QtAws {
namespace MediaStore {

class PutContainerPolicyRequest;

class QTAWS_EXPORT PutContainerPolicyRequestPrivate : public MediaStoreRequestPrivate {

public:
    PutContainerPolicyRequestPrivate(const MediaStoreRequest::Action action,
                                   PutContainerPolicyRequest * const q);
    PutContainerPolicyRequestPrivate(const PutContainerPolicyRequestPrivate &other,
                                   PutContainerPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutContainerPolicyRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
