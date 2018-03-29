/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CREATESNAPSHOTREQUEST_P_H
#define QTAWS_CREATESNAPSHOTREQUEST_P_H

#include "elasticache_p.h"
#include "createsnapshotrequest.h"

namespace AWS {

namespace ElastiCache {

class CreateSnapshotRequest;

class QTAWS_EXPORT CreateSnapshotRequestPrivate : public ElastiCachePrivate {

public:
    CreateSnapshotRequestPrivate(const ElastiCache::Action action,
                                   CreateSnapshotRequest * const q);
    CreateSnapshotRequestPrivate(const CreateSnapshotRequestPrivate &other,
                                   CreateSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSnapshotRequest)

};

} // namespace ElastiCache
} // namespace AWS

#endif
