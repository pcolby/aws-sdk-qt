// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETAGSFROMRESOURCEREQUEST_P_H
#define QTAWS_REMOVETAGSFROMRESOURCEREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "removetagsfromresourcerequest.h"

namespace QtAws {
namespace DatabaseMigration {

class RemoveTagsFromResourceRequest;

class RemoveTagsFromResourceRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    RemoveTagsFromResourceRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   RemoveTagsFromResourceRequest * const q);
    RemoveTagsFromResourceRequestPrivate(const RemoveTagsFromResourceRequestPrivate &other,
                                   RemoveTagsFromResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveTagsFromResourceRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
