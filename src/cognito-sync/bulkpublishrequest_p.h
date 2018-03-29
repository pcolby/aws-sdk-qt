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

#ifndef QTAWS_BULKPUBLISHREQUEST_P_H
#define QTAWS_BULKPUBLISHREQUEST_P_H

#include "cognitosync_p.h"
#include "bulkpublishrequest.h"

namespace AWS {

namespace CognitoSync {

class BulkPublishRequest;

class QTAWS_EXPORT BulkPublishRequestPrivate : public CognitoSyncPrivate {

public:
    BulkPublishRequestPrivate(const CognitoSync::Action action,
                                   BulkPublishRequest * const q);
    BulkPublishRequestPrivate(const BulkPublishRequestPrivate &other,
                                   BulkPublishRequest * const q);

private:
    Q_DECLARE_PUBLIC(BulkPublishRequest)

};

} // namespace CognitoSync
} // namespace AWS

#endif
