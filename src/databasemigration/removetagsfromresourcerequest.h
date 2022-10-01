// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETAGSFROMRESOURCEREQUEST_H
#define QTAWS_REMOVETAGSFROMRESOURCEREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class RemoveTagsFromResourceRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT RemoveTagsFromResourceRequest : public DatabaseMigrationRequest {

public:
    RemoveTagsFromResourceRequest(const RemoveTagsFromResourceRequest &other);
    RemoveTagsFromResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveTagsFromResourceRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
