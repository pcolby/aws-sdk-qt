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

#ifndef QTAWS_GETCONTAINERPOLICYREQUEST_P_H
#define QTAWS_GETCONTAINERPOLICYREQUEST_P_H

#include "mediastore_p.h"
#include "getcontainerpolicyrequest.h"

namespace AWS {

namespace MediaStore {

class GetContainerPolicyRequest;

class QTAWS_EXPORT GetContainerPolicyRequestPrivate : public MediaStorePrivate {

public:
    GetContainerPolicyRequestPrivate(const MediaStore::Action action,
                                   GetContainerPolicyRequest * const q);
    GetContainerPolicyRequestPrivate(const GetContainerPolicyRequestPrivate &other,
                                   GetContainerPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetContainerPolicyRequest)

};

} // namespace MediaStore
} // namespace AWS

#endif
