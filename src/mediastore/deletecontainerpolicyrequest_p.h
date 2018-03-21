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

#ifndef QTAWS_DELETECONTAINERPOLICYREQUEST_P_H
#define QTAWS_DELETECONTAINERPOLICYREQUEST_P_H

#include "mediastore_p.h"
#include "deletecontainerpolicyrequest.h"

namespace AWS {

namespace MediaStore {

class DeleteContainerPolicyRequest;

class QTAWS_EXPORT DeleteContainerPolicyRequestPrivate : public MediaStorePrivate {

public:
    DeleteContainerPolicyRequestPrivate(const MediaStore::Action action,
                                   DeleteContainerPolicyRequest * const q);
    DeleteContainerPolicyRequestPrivate(const DeleteContainerPolicyRequestPrivate &other,
                                   DeleteContainerPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteContainerPolicyRequest)

};

} // namespace MediaStore
} // namespace AWS

#endif
